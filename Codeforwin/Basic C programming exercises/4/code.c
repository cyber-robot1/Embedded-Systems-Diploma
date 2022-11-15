/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    (len)=> length of rectangle
    (wid)=> width of rectangle
    (per)=> perimeter of rectangle
    */
    float len, wid, per;

    // Getting width and length of rectangle from user
    printf("Enter length: ");
    scanf("%f", &len);
    printf("Enter width: ");
    scanf("%f", &wid);

    // Getting perimeter of rectangle
    per = (len+wid)*2;

    // Printing perimeter of rectangle
    printf("Perimeter of rectangle = %f units", per);


    return 0;
}
