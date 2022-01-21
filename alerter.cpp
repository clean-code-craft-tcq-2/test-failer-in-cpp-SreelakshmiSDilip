#include <iostream>
#include <assert.h>
#include "NetworkStub.h"

int alertFailureCount = 0;
AlertStatus returnCode = {false ,0};

void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    returnCode = networkAlertStub(celcius);
    if (returnCode.isTempAlertSuccess != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    alertInCelcius(400.5);
    assert(alertFailureCount== 1);
    assert(returnCode.isNetworkAlertStubCalled == true); //alerter should be called only if tempinC exceeds threshold.
    alertInCelcius(303.6);
    assert(alertFailureCount== 1);
    assert(returnCode.isNetworkAlertStubCalled == false);
    alertInCelcius(505.2);
    assert(alertFailureCount== 2);
    assert(returnCode.isNetworkAlertStubCalled == true);
    alertInCelcius(105.2);
    assert(alertFailureCount== 2);
    assert(returnCode.isNetworkAlertStubCalled == false);
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
