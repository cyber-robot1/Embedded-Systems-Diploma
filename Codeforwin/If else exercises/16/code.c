/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side1, side2, side3;

    // Getting the three sides of triangle from user
    printf("Input first side: ");
    scanf("%d", &side1);
    printf("Input second side: ");
    scanf("%d", &side2);
    printf("Input third side: ");
    scanf("%d", &side3);

    // Checking if the triangle is equilateral, isosceles or scalene
    if(side1==side2 && side2==side3)
        printf("Equilateral triangle.");

    else if(side1==side2 || side2==side3 || side1==side3)
        printf("Isosceles triangle.");

    else
        printf("Scalene triangle.");

    return 0;
}
