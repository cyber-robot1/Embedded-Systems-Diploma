/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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

// C function to delete both the first and last digits of a given number
int removeFLDigit(int n)
{

    /*
     (f_digit)=> first digit of the given number
     (c)=> No. of digits of the given number
     (new_n)=> the given number with both the first and last digits deleted
    */
    int f_digit, c=0, temp1, temp2, new_n;

    // to save the value of the given number to be used if needed
    temp1=n;

    temp1=temp1/10;

    while(n!=0)
    {
        f_digit=n%10;
        n=n/10;
        c++;
    }

    temp2=pow(10, c-2)*f_digit;

    new_n=temp1-temp2;

    return new_n;
}

int main()
{

    /*
     (f_digit)=> first digit of the given number
     (l_digit)=> last digit of the given number
     (n_digit)=> number of digits of the given number
     (new_n)=> the given number with both first and last digits deleted
    */
    int n, new_n, f_digit, l_digit, n_digit;
    int temp1, temp2;

    // Getting number from user
    printf("Input any number: ");
    scanf("%d", &n);

    // Calculating first, last digits of the given number and its No. of digits
    f_digit=firstDigit(n);
    l_digit=lastDigit(n);
    n_digit=numOfDigits(n);

    // Calculating the given number with both first and last digits deleted
    new_n=removeFLDigit(n);

    temp1=pow(10, n_digit-2)*l_digit;
    temp1=temp1+new_n;
    temp2=(temp1*10)+f_digit;
        
    // Printing the given number after swapping its first and last digits
    printf("Number after swapping first and last digit: %d", temp2);

    return 0;
}
