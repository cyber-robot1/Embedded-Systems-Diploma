/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// C function to delete the first digit of a given number
int removeFDigit(int n)
{

    /*
     (f_digit)=> first digit of the given number
     (c)=> number of digits of the given number
     (new_n)=> the given number with the first digit deleted
    */
    int f_digit, c=0, temp1, temp2, new_n;

    // to save the value of the given number to be used if needed
    temp1=n;

    while(n!=0)
    {
        f_digit=n%10;
        n=n/10;
        c++;
    }

    temp2=pow(10, c-1)*f_digit;

    new_n=temp1-temp2;

    return new_n;
}

int main()
{

    int n, result;

    // Getting a number from user
    printf("Input a number: ");
    scanf("%d", &n);

    result=removeFDigit(n);

    // Printing the number with the first digit deleted
    printf("Result = %d", result);

    return 0;
}
