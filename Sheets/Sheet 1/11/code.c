/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (sum)=> sum of digits of the given number
     (c)=> number of digits of the given number
    */
    unsigned int num, sum=0, c=0;
    unsigned char digit;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Getting all the digits of the given number and sum them
    while(num!=0)
    {
        digit = num % 10;
        sum = sum + digit;
        c++;
        num = num / 10;
    }

    // Printing sum of digits of the given number and number of its digits
    printf("Sum of digits = %d\n", sum);
    printf("No. of digits = %d", c);

    return 0;
}
