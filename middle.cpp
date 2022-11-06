#include <iostream>
#include "middle.h"

using namespace std;

int itc_min_num(long long number){

    int zifra,minimum;
    minimum = 9;

    while (number >0){
        zifra = number % 10;

        if(zifra<minimum){
            minimum = zifra;
        }

        number /= 10;
    }

    return minimum;

}

int itc_rev_num(long long number){

    return -1;

}

int itc_null_count(long long number){
    int zifra, nullCount;
    nullCount = 0;
    while(number > 0){
        zifra = number % 10;

        if (zifra == 0){
            nullCount = nullCount + 1;
        }

        number /= 10;
    }

    return nullCount;

}

bool itc_mirror_num(long long number){/////////////////////
bool zifra,x,y;
    while (number > 0){
        zifra = number % 10;
        zifra =


    }




