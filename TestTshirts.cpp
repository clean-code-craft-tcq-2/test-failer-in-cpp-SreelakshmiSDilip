#include <iostream>
#include <assert.h>
#include"tshirts.cpp"


void TestTshirts(int actualSizeIncms ,char expectedSize)
{
    assert(size(actualSizeIncms) == expectedSize);
}

int main() {
    TestTshirts(37 , 'S');
    TestTshirts(40 ,'M');
    TestTshirts(43 , 'L');
    TestTshirts(38 , 'M'); 
    TestTshirts(42 , 'L');   
    TestTshirts(50 , 'U');
    TestTshirts(30 , 'U');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
