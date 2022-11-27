/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// C function to return the first digit of a given number
int firstDigit(int n)
{
    int f_digit=0;

    while(n!=0)
    {
        f_digit=n%10;
        n=n/10;
    }
    return f_digit;
}

// C function to return the last digit of a given number
int lastDigit(int n)
{
    int l_digit=0;

    l_digit=n%10;

    return l_digit;
}

// C function to count No. of digits of a given number
int numOfDigits(int n)
{
    int c=0;

    while(n!=0)
    {
        n=n/10;
        c++;
    }

    return c;
}

int main()
{

    /*
     (f_digit)=> first digit of the given number
     (l_digit)=> last digit of the given number
     (n_digit)=> number of digits of the given number
    */
    int n, f_digit, l_digit, n_digit;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculating first, last digits of the given number and its No. of digits
    f_digit=firstDigit(n);
    l_digit=lastDigit(n);
    n_digit=numOfDigits(n);

    // Printing first, last digits of the given number and its No. of digits
    printf("First digit = %d\n", f_digit);
    printf("Last digit = %d\n", l_digit);
    printf("No. of digits = %d\n", n_digit);

    return 0;
}
