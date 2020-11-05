/** lab13main.c
* ===========================================================
* Name: Cleo Cowie 
* Section: T1/2
* Project: Lab 13
* Purpose: Pointers
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab13functs.h"


int main (void) {
    int variable1;
    int variable2;
    int variable5;
    int variable6;
    int variable7;
    long long variable8;

    printf("Input class year.\n");
    scanf("%d",&variable1);
    printf("Input favorite number.\n");
    scanf("%d",&variable2);

    swapPassbyValue(variable1,variable2);
    printf("aNum = %d, bNum = %d\n", variable1,variable2);

    swapPassbyReference(&variable1,&variable2);
    printf("aNum = %d, bNum = %d\n",variable1,variable2);

    printf("Input two values used to find the sum.\n");
    scanf("%d %d", &variable5,&variable6);

    pointerSum(&variable5,&variable6);
    printf("The sum of %d and %d = %d\n",variable5,variable6,pointerSum(&variable5,&variable6));

    printf("Enter integer to find factorial.\n");
    scanf("%d", &variable7);

    findFactorial(variable7,&variable8);
    printf("The factorial of %d is %lld\n", variable7,variable8);



    return 0;
}