/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


/*
 Getting power of the number by using the built-in function pow()
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, exponent, power=0;

    // Getting base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Getting power of the number
    power = pow(base, exponent);

    // Printing power of the number
    printf("Power = %d", power);

    return 0;
}
