/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (len1)=> length in cm
     (len2)=> length in m
     (len3)=> length in km
     */

    float len1, len2, len3;

    // Getting length in cm from user
    printf("Enter length in centimeter = ");
    scanf("%f", &len1);

    // Converting length in cm to length in m
    len2 = len1/100;

    // Converting length in cm to length in km
    len3 = len1/100000;

    // Printing length in m
    printf("Length in meter = %.2f m\n", len2);

    // Printing length in km
    printf("Length in kilometer = %.2f km", len3);


    return 0;
}
