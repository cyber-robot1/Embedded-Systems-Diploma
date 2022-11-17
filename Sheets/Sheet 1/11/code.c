/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int num, sum=0;
    unsigned char digit;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Getting all the digits of the given number and sum them
    while(num!=0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    // Printing sum of digits of the given number
    printf("Sum of digits = %d", sum);

    return 0;
}
