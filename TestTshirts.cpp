#include <iostream>
#include <assert.h>
#include"tshirts.cpp"


void TestTshirts(char actualSize ,char expectedSize)
{
    assert(actualSize == expectedSize);
}

int main() {
    TestTshirts(size(37) , 'S');
    TestTshirts(size(40) ,'M');
    TestTshirts(size(43) , 'L');
    TestTshirts(size(38) , 'M'); 
    TestTshirts(size(42) , 'L');   
    TestTshirts(size(50) , 'U');
    TestTshirts(size(30) , 'U');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
