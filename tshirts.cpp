#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms >=  38 && cms < 42) {
        sizeName = 'M';
    } else if(cms >= 42 && cms < 44) {
        sizeName = 'L';
    }else if (cms >= 44 && cms < 48){
        sizeName = 'XL';
    }else{
        sizeName ='NA';
    }
    return sizeName;
}

int main() {
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M'); // size 38 can  be small or medium
    assert(size(42) == 'L');   //size 42 can be medium or large
    assert(size(50) == 'NA');
    assert(size(30) != 'NA');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
