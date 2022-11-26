/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // (rev_n)=> the reverse number of the given number
    int n, digit, rev_n=0;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &n);

    // Calculating reverse of the given number
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev_n=(rev_n*10)+digit;
    }

    // Printing reverse of the given number
    printf("Reverse of 12345 = %d", rev_n);

    return 0;
}
