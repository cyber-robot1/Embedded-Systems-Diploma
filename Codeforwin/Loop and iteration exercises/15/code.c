/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (prod)=> product of all digits of the given number
    int n, prod=1, digit=0;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &n);

    // Calculating product of all digits of the given number
    while(n!=0)
    {
        digit=n%10;
        prod=prod*digit;
        n=n/10;
    }

    // Printing product of all digits of the given number
    printf("Product of digits: %d", prod);

    return 0;
}
