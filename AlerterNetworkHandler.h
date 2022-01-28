#include <iostream>

const int c_AlertThresholdTempCel = 200 ;

int  networkAlertStubforOK(float celcius) {
   
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    return 200;
    // Return 200 for ok
    // Return 500 for not-ok
   
}

int  networkAlertStubforNotOK(float celcius) {
   
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    return 500;
    // Return 200 for ok
    // Return 500 for not-ok
}
   



