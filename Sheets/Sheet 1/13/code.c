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
    scanf("%u", &num);

    while(num!=0)
    {
        digit = num%10;
        if(digit == 1 || digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            digit = 0;
            sum = sum + digit;
        }
        else if(digit == 0 || digit == 4 || digit == 6 || digit == 9)
        {
            digit = 1;
            sum = sum + digit;
        }
        else if(digit == 8)
        {
            digit = 2;
            sum = sum + digit;
        }
        num = num / 10;
    }

    printf("sum = %u", sum);

    return 0;
}
