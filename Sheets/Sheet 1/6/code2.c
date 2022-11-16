/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

/*
 Getting power of the number without using the built-in function pow()
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int base, exponent, power=1;

    // Getting base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Getting power of the number
    for(int i=1; i<=exponent; i++)
    {
        power = power * base;
    }


    // Printing power of the number
    printf("Power = %d", power);

    return 0;
}
