/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (x)=> amount
    unsigned int x;
    unsigned int R500, R100, R50, R20, R10, R5, R2, R1;

    // Getting amount from user
    printf("Input amount: ");
    scanf("%u", &x);

    // Calculating minimum number of notes based on the given amount
    R500 = x/500;
    x = x-(R500*500);

    R100 = x/100;
    x = x-(R100*100);

    R50 = x/50;
    x = x-(R50*50);

    R20 = x/20;
    x = x-(R20*20);

    R10 = x/10;
    x = x-(R10*10);

    R5 = x/5;
    x = x-(R5*5);

    R2 = x/2;
    x = x-(R2*2);

    R1 = x;

    // Printing minimum number of notes based on the given amount
    printf("500: %d\n", R500);
    printf("100: %d\n", R100);
    printf("50: %d\n", R50);
    printf("20: %d\n", R20);
    printf("10: %d\n", R10);
    printf("5: %d\n", R5);
    printf("2: %d\n", R2);
    printf("1: %d", R1);

    return 0;
}
