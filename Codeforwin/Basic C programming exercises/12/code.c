/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num, square_root;

    // Getting number from user
    printf("Enter any number: ");
    scanf("%lf", &num);

    // Getting square root of the number
    square_root = sqrt(num);

    // Printing square root of the number
    printf("Square root of %.1lf = %.1lf", num, square_root);

    return 0;
}
