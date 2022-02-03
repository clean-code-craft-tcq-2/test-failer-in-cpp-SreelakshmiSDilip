#include <iostream>
#include <assert.h>
#include "AlerterNetworkHandler.h"
#include "Alerter.cpp"


int main() {
    
    alertInCelcius(400.5 ,networkAlertStubforNotOK );
    assert(alertFailureCount== 1);
    alertInCelcius(303.6 ,networkAlertStubforOK );
    assert(alertFailureCount== 1);
    alertInCelcius(603.6 , networkAlertStubforNotOK);
    assert(alertFailureCount== 2);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
