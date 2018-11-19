#include "vision.h"

vision::vision()
{
    n = 0;
    fat = 0;
}

void vision::soma(){
    n++;
}

void vision::subtrai(){
    n--;
}

void vision::fatorial(){
    fat = 1;
    for(int i =1; i<=n; i++){
        fat *= i;
    }
}

int vision::getN(){
    return n;
}

int vision::getFat(){
    return fat;
}
