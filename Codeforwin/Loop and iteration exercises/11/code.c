/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     (f_digit)=> first digit of the given number
     (l_digit)=> last digit of the given number
    */
    int n, f_digit=0, l_digit=0;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &n);

    // Calculating last digit of the given number
    l_digit=n%10;

    // Calculating first digit of the given number
    while(n!=0)
    {
        f_digit=n%10;
        n=n/10;
    }

    // Printing first and last digits of the given number
    printf("First digit: %d\n", f_digit);
    printf("Last digit: %d", l_digit);

    return 0;
}
