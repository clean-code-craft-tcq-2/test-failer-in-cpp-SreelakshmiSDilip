#include <iostream>
#include <assert.h>
#include <string>


const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};




const char* getCombinedPairNumandColorString(int majorColorId , int minorColorId)
{

	int pairNum = (majorColorId)* 5 + minorColorId+1;
	static char pairNumandColorPairStr[80];
	sprintf(pairNumandColorPairStr,"\t%d\t|%s\t|%s\t", pairNum,majorColor[majorColorId],minorColor[minorColorId]);
	//std::string pairNumandColorPair = pairNumString + tabChar + majorColor[majorColorId]+tabChar+minorColor[majorColorId] ;
	return pairNumandColorPairStr;

}

int printColorMap()
{

	int i = 0, j = 0;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			//const char* strCurrentRowEntry[80] = getCombinedPairNumandColorString(i,j);
			std::cout <<getCombinedPairNumandColorString(i,j)<< std::endl;

		}
	}
	return i * j;
}

void testColorCodingReferenceManual(int majorColorId, int minorColorId , std::string expectedPairNumberandColor)
{

	std:: string actualPairNumberandColor = getCombinedPairNumandColorString(majorColorId,minorColorId);
	assert(actualPairNumberandColor.compare(expectedPairNumberandColor) == 0);
	
}


int main() {
	int result = printColorMap();
	assert(result == 25);
	testColorCodingReferenceManual(0 , 0, "	1	|White	|Blue"); 
	/*testColorCodingReferenceManual(1 , 1, "	        2	|White  |Orange");
	testColorCodingReferenceManual(2 , 2, "	        3	|White  |Green ");
	testColorCodingReferenceManual(3 , 3, "	        4	|White  |Brown ");
	testColorCodingReferenceManual(4 , 4, "	        5	|White  |Slate ");
	testColorCodingReferenceManual(5 , 0, "	        6	|Red    |Blue  ");
	testColorCodingReferenceManual(6 , 1, "	        7	|Red    |Orange");
	testColorCodingReferenceManual(7 , 2, "	        8	|Red    |Green ");
	testColorCodingReferenceManual(8 , 3, "	        9	|Red    |Brown ");
	testColorCodingReferenceManual(9 , 4, "	       10	|Red    |Slate ");
	testColorCodingReferenceManual(10, 0, "	       11	|Black  |Blue  ");
	testColorCodingReferenceManual(11, 1, "	       12	|Black  |Orange");
	testColorCodingReferenceManual(12, 2, "	       13	|Black  |Green ");
	testColorCodingReferenceManual(13, 3, "	       14	|Black  |Brown ");
	testColorCodingReferenceManual(14, 4, "	       15	|Black  |Slate ");
	testColorCodingReferenceManual(15, 0, "	       16	|Yellow |Blue  ");
	testColorCodingReferenceManual(16, 1, "	       17	|Yellow |Orange");
	testColorCodingReferenceManual(17, 2, "	       18	|Yellow |Green ");
	testColorCodingReferenceManual(18, 3, "	       19	|Yellow |Brown ");
	testColorCodingReferenceManual(19, 4, "	       20	|Yellow |Slate ");
	testColorCodingReferenceManual(20, 0, "	       21	|Violet |Blue  ");
	testColorCodingReferenceManual(21, 1, "	       22	|Violet |Orange");
	testColorCodingReferenceManual(22, 2, "	       23	|Violet |Green ");
	testColorCodingReferenceManual(23, 3, "	       24	|Violet |Brown ");
	testColorCodingReferenceManual(24, 4, "	       25	|Violet |Slate ");*/
	std::cout << "All is well (maybe!)\n";
	return 0;
}
