#include <iostream>
#include <assert.h>
#include "AlerterNetworkHandler.h"

int alertFailureCount = 0;
int returnCode = 0;

void alertInCelcius(float farenheit,int* networkAlertFnPtr) {
    int *ptrToNetworkAlertFn(float); 
    ptrToNetworkAlertFn = &networkAlertFnPtr;
    float celcius = (farenheit - 32) * 5 / 9;
    returnCode = *ptrToNetworkAlertFn(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    
    alertInCelcius(400.5 ,networkAlertStub );
    assert(alertFailureCount== 1);
    alertInCelcius(303.6 ,networkAlertStub );
    assert(alertFailureCount== 1);
    alertInCelcius(603.6 , networkAlertStub);
    assert(alertFailureCount== 2);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
