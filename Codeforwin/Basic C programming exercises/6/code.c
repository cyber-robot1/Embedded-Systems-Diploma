/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    /*
    (r)=> radius of a circle
    (area)=> area of a circle
    (circum)=> circumference of a circle
    (dia)=> diameter of a circle
    */

    float r, area, circum, dia;

    // Getting radius from user
    printf("Enter radius: ");
    scanf("%f", &r);

    // Getting diameter of a circle
    dia = r*2;

    // Getting area of a circle
    area = M_PI*(r*r);                               //(M_PI)=> pi constant variable included in library math.h

    // Getting circumference of a circle
    circum = 2*M_PI*r;


    // Printing diameter of a circle
    printf("Diameter = %.2f units\n", dia);

    // Printing circumference of a circle
    printf("Circumference = %.2f units\n", circum);

    // Printing area of a circle
    printf("Area = %.2f sq. units", area);


    return 0;
}
