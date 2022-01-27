#include <iostream>

const int c_AlertThresholdTempCel = 200 ;

int  networkAlertStub(float celcius) {
   
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    if(c_AlertThresholdTempCel > celcius)
    {
        return 200;
    }
    else
    {
        return 500;
    }
    // Return 200 for ok
    // Return 500 for not-ok
   
}

int networkAlertReal(float celcius)
{
   int l_returnCode = 0;
  
      // add actual network communication code here
  
   return l_returnCode;
}

