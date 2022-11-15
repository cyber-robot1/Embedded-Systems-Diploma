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

    // Getting temperature in Fahrenheit from user
    printf("Temperature in fahrenheit = ");
    scanf("%f", &t2);

    // Converting temperature in Fahrenheit to temperature in Celsius
    t1 = (t2-32)*5/9;

    // Printing temperature in Celsius
    printf("Temperature in celsius = %.2f", t1);


    return 0;
}
