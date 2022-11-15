/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, exponent, result;

    // Getting base and exponent from user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    // Getting base^exponent
    result = pow(base, exponent);

    // Printing result
    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, result);

    return 0;
}
