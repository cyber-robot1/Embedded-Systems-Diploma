  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

// C function to calculate No. of digits in the given number
unsigned char numDigits(unsigned long long int num)
{
    // (c)=> counter to count No. of digits in the given number
    int c=0;
    while(num!=0)
    {
        c++;
        num=num/10;
    }

    return c;
}

// C function to return the No. of zero digits lost if found in the given number after reversing it
unsigned char zeroDigitsLost(unsigned long long int num)
{
    unsigned long long int rev_n=0, temp;

    // (z)=> difference between No. of digits of each the given number and the reversed one
    unsigned char digit, z=0;

    // to save the value of the given number to be used later if needed
    temp=num;

    // Reversing the given number
    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        rev_n=(rev_n*10)+digit;
    }

    /* Calculating the difference between No. of digits of each
       the given number and the reversed one
       to know number of zero digits lost after reversing the given number
    */
    z=numDigits(temp)-numDigits(rev_n);

    return z;
}

int main()
{

    unsigned long long int num;
    unsigned char z;

    // Getting a number from user
    printf("Input a number: ");
    scanf("%llu", &num);
    z=zeroDigitsLost(num);

    printf("No. of zero digits lost = %d", z);

    return 0;
}
