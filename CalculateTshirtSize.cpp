#include "CalculateTshirtSize.h"


char CalculateTshirtSize(int sizeInCms) {

    char sizeName = '\0';
    if(sizeInCms >= c_LimitSmall  && sizeInCms < c_limitMedium ) {
        sizeName = 'S';
    } else if(sizeInCms >=  c_limitMedium && sizeInCms < c_limitLarge {
        sizeName = 'M';
    } else if(sizeInCms >= c_limitLarge && sizeInCms < c_limitExtraLarge ) {
        sizeName = 'L';
    }else{
        sizeName ='U'; //U stands for undefined
    }
    return sizeName;
}

