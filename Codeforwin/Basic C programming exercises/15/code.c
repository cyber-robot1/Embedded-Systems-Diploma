/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double num, area;

    // Getting side of an equilateral triangle from user
    printf("Enter side of the equilateral triangle: ");
    scanf("%lf", &num);

    // Getting area of an equilateral triangle
    area = (num * num) * (sqrt(3) / 4);

    // Printing area of an equilateral triangle
    printf("Area of equilateral triangle = %.2lf sq. units", area);

    return 0;
}
