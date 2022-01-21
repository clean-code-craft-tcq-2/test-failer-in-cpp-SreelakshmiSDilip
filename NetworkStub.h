#include <iostream>

const int c_AlertThresholdTempCel = 200 ;
struct AlertStatus
{
    bool isNetworkAlertStubCalled;
    int  isTempAlertSuccess;
}

AlertStatus networkAlertStub(float celcius) {
   
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    AlertStatus alertStatusForCurrenttemp = {true , 200};
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return alertStatusForCurrenttemp;
}
