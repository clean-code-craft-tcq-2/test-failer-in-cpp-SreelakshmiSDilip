#include <iostream>
#include <assert.h>
#include <string>
#include <cstring>


const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

const int c_MaxIndex = 5;

const char* getCombinedPairNumandColorString(int majorColorId , int minorColorId)
{

	int pairNum = (majorColorId)* c_MaxIndex + minorColorId + 1;
	static char pairNumandColorPairStr[80];
	sprintf(pairNumandColorPairStr,"\t%d\t|%s\t|%s", pairNum,majorColor[majorColorId],minorColor[minorColorId]);
	return pairNumandColorPairStr;

}

int printColorMap()
{
        int majorColorIndex = 0;
	int minorColorIndex = 0;
	for(majorColorIndex = 0; majorColorIndex < c_MaxIndex; majorColorIndex++) {
		for(minorColorIndex = 0; minorColorIndex < c_MaxIndex; minorColorIndex++) {
			std::cout <<std::endl<<getCombinedPairNumandColorString(majorColorIndex,minorColorIndex)<< std::endl;

		}
	}
	return majorColorIndex * minorColorIndex;
}

void testColorCodingReferenceManual(int majorColorId, int minorColorId ,std::string expectedPairNumberandColor)
{
	std:: string actualPairNumberandColor = getCombinedPairNumandColorString(majorColorId,minorColorId);
	assert(actualPairNumberandColor.compare(expectedPairNumberandColor) == 0);
}


int main() {
	int result = printColorMap();
	assert(result == 25);
        testColorCodingReferenceManual(0 , 0, "	1	|White	|Blue");
	testColorCodingReferenceManual(0 , 1, "	2	|White	|Orange");
	testColorCodingReferenceManual(0 , 2, "	3	|White	|Green");
        testColorCodingReferenceManual(0 , 3, "	4	|White	|Brown");
        testColorCodingReferenceManual(0 , 4, "	5	|White	|Slate");
	testColorCodingReferenceManual(1 , 0, "	6	|Red	|Blue");
        testColorCodingReferenceManual(1 , 1, "	7	|Red	|Orange");
	testColorCodingReferenceManual(1 , 2, "	8	|Red	|Green");
        testColorCodingReferenceManual(1 , 3, "	9	|Red	|Brown");
        testColorCodingReferenceManual(1 , 4, "	10	|Red	|Slate");
	testColorCodingReferenceManual(2 , 0, "	11	|Black	|Blue");
        testColorCodingReferenceManual(2 , 1, "	12	|Black	|Orange");
	testColorCodingReferenceManual(2 , 2, "	13	|Black	|Green");
        testColorCodingReferenceManual(2 , 3, "	14	|Black	|Brown");
        testColorCodingReferenceManual(2 , 4, "	15	|Black	|Slate");
	testColorCodingReferenceManual(3 , 0, "	16	|Yellow	|Blue");
        testColorCodingReferenceManual(3 , 1, "	17	|Yellow	|Orange");
	testColorCodingReferenceManual(3 , 2, "	18	|Yellow	|Green");
        testColorCodingReferenceManual(3 , 3, "	19	|Yellow	|Brown");
        testColorCodingReferenceManual(3 , 4, "	20	|Yellow	|Slate");
       	testColorCodingReferenceManual(4 , 0, "	21	|Violet	|Blue");
        testColorCodingReferenceManual(4 , 1, "	22	|Violet	|Orange");
	testColorCodingReferenceManual(4 , 2, "	23	|Violet	|Green");
        testColorCodingReferenceManual(4 , 3, "	24	|Violet	|Brown");
        testColorCodingReferenceManual(4 , 4, "	25	|Violet	|Slate");

	std::cout << "All is well (maybe!)\n";
	return 0;
}
