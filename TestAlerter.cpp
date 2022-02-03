#include <iostream>
#include <assert.h>
#include "AlerterNetworkHandler.h"
#include "Alerterhelper.h"



void Testalerter(int expectedAlertFailureCount ,int actualAlertFailureCount)
{
    assert(expectedAlertFailureCount== actualAlertFailureCount);
}

int main() {
    
    alertInCelcius(400.5 ,networkAlertStubforNotOK );
    Testalerter(1,alertFailureCount);
    alertInCelcius(303.6 ,networkAlertStubforOK );
    Testalerter(1,alertFailureCount);
    alertInCelcius(603.6 , networkAlertStubforNotOK);
    Testalerter(2,alertFailureCount);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
