#include <iostream>
#include "middle.h"
using namespace std;
void itc_num_print(int number){
cout<< number;

}
int itc_len_num(long long number){
    int rezult,zifra;
    rezult=0;
while (number>0){
        zifra = number%10;
        rezult = rezult +1;
        number = number/10;
}
return rezult;

}
int itc_sum_num(long long number){
int symma,zifra;
symma = 0 ;
while (number>0){
        zifra = number %10;
        symma = zifra + symma;
        number = number/10;
}
return symma;




}
long long itc_multi_num(long long number){
int zifra,proiz;
    proiz = 1;
while (number>0){
    zifra = number %10;
    proiz = proiz * zifra ;
    number = number /10;



}
return proiz;



}



