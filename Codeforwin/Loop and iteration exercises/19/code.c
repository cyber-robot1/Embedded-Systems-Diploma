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

int main()
{

    /*
    (rev_n)=> the given number reversed
    (z)=> No. of lost zero digits after reversing the given number
    */
    unsigned long long int num, temp, rev_n=0;
    unsigned char z=0, digit;

    // Getting a number from user
    printf("Input number: ");
    scanf("%llu", &num);

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

    // Printing the given number in words
    while(rev_n!=0)
    {
        digit=rev_n%10;
        rev_n=rev_n/10;

        if(digit==0)
            printf("Zero ");

        else if(digit==1)
            printf("One ");

        else if(digit==2)
            printf("Two ");

        else if(digit==3)
            printf("Three ");

        else if(digit==4)
            printf("Four ");

        else if(digit==5)
            printf("Five ");

        else if(digit==6)
            printf("Six ");

        else if(digit==7)
            printf("Seven ");

        else if(digit==8)
            printf("Eight ");

        else if(digit==9)
            printf("Nine ");
    }

    // Printing lost zero digits if found
    while(z--)
    {
        printf("Zero ");
    }

    return 0;
}
