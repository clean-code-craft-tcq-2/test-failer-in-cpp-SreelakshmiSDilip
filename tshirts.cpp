#include <iostream>


char CalculateTshirtSize(int sizeInCms) {
    char sizeName = '\0';
    if(sizeInCms >=34 && sizeInCms < 38) {
        sizeName = 'S';
    } else if(sizeInCms >=  38 && sizeInCms < 42) {
        sizeName = 'M';
    } else if(sizeInCms >= 42 && sizeInCms < 44) {
        sizeName = 'L';
    }else{
        sizeName ='U'; //U stands for undefined
    }
    return sizeName;
}

