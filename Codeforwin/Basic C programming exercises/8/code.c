/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (t1)=> temperature in Celsius
     (t2)=> temperature in Fahrenheit
    */

    float t1, t2;

    // Getting temperature in Celsius from user
    printf("Enter temperature in Celsius = ");
    scanf("%f", &t1);

    // Converting temperature in Celsius to temperature in Fahrenheit
    t2 = (t1*9/5)+32;


    // Printing length in m
    printf("Temperature in Fahrenheit = %.1f F", t2);


    return 0;
}
