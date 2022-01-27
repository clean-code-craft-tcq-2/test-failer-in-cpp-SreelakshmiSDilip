#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert((size(38) != 'L')); // size 38 can  be small or medium
    assert(size(42) != 'S');   //size 42 can be medium or large
    assert((size(1000) != 'S');
    assert (size(1000) != 'M') ;
    assert (size(1000) != 'L')); // size 1000 is not a valid input
    assert((size(0) != 'S');
    assert (size(0) != 'M') ;
    assert(size(0) != 'L')); // size 0 is not a valid input
    std::cout << "All is well (maybe!)\n";
    return 0;
}
