/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    int n, result;

    // Getting a number from user
    printf("Input a number: ");
    scanf("%d", &n);

    result=removeFLDigit(n);

    // Printing the number with both the first and last digits deleted
    printf("Result = %d", result);

    return 0;
}
