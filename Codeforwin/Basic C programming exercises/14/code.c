/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    double base, height, area;

    // Getting base and height of the triangle from user
    printf("Enter base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter height of the triangle: ");
    scanf("%lf", &height);

    // Getting area of the triangle
    area = (base*height)*0.5;

    // Printing area of the triangle
    printf("Area of the triangle = %.1lf sq. units", area);

    return 0;
}
