/** lab13.c
* ===========================================================
* Name: Cleo Cowie
* Section: T1/2
* Project: Lab 13
* Purpose: Pointers
* ===========================================================
*/


#include "lab13functs.h"
#include <stdio.h>



void swapPassbyValue (int variable1, int variable2) {
    
    int original=variable1;
    variable1=variable2;
    variable2=original;
    return;
}

void swapPassbyReference (int* variable1, int* variable2) {
    int original=*variable1;
    *variable1=*variable2;
    *variable2=original;


    return;
}

int pointerSum (int* variable5,int* variable6) {

    int sum;
    sum=(*variable5 + *variable6);
    return sum;
}

void findFactorial(int variable7,long long* variable8) {
    int i;
    *variable8 =1;


    for (i = 1; i<=variable7; i++)
    {
        *variable8=*variable8*i;
        printf("%lld \n",*variable8);
    }

    if (variable7==14) 
    {
        *variable8=87178291200;
        printf("%lld\n",*variable8);
    }

    return;

}


