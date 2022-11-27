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

int main()
{

    // (f_digit)=> first digit of the given number
    int n, f_digit;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &n);

    f_digit=firstDigit(n);

    // Printing first digit of the given number
    printf("%d", f_digit);

    return 0;
}
