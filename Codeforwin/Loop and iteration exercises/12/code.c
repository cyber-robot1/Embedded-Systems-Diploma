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
     (sum)=> sum of first and last digit of the given number
    */
    int n, f_digit=0, l_digit=0, sum=0;

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

    // Calculating Sum of first and last digit of the given number
    sum=f_digit+l_digit;

    // Printing sum of first and last digit of the given number
    printf("Sum of first and last digit: %d", sum);

    return 0;
}
