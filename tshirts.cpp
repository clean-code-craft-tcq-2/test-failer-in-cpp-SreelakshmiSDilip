#include <iostream>


char size(int cms) {
    char sizeName = '\0';
    if(cms >=34 && cms < 38) {
        sizeName = 'S';
    } else if(cms >=  38 && cms < 42) {
        sizeName = 'M';
    } else if(cms >= 42 && cms < 44) {
        sizeName = 'L';
    }else{
        sizeName ='U'; //U stands for undefined
    }
    return sizeName;
}

