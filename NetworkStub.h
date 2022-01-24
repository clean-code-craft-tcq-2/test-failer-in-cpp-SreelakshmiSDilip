#include <iostream>

const int c_AlertThresholdTempCel = 200 ;
enum TESTENV
{
   Real = 0,
   Simulation = 1
   } testParameter;

int networkAlert(float celcius , TESTENV testParameter)
{
   int l_returnCode = 0
   if(testParameter == TESTENV::Real)
   {
      // add actual network communication code here
   }
   else
   {
      l_returnCode = networkAlertStub(float celcius);
   }
   return l_returnCode;
}

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
