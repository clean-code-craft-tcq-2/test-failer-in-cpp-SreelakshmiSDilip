#include <iostream>
#include <assert.h>


int main() {
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M'); 
    assert(size(42) == 'L');   
    assert(size(50) == 'U');
    assert(size(30) == 'U');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
