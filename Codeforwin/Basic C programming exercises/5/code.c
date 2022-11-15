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
    (area)=> area of rectangle
    */

    float len, wid, area;

    // Getting width and length of rectangle from user
    printf("Enter length: ");
    scanf("%f", &len);
    printf("Enter width: ");
    scanf("%f", &wid);

    // Getting area of rectangle
    area = len*wid;

    // Printing perimeter of rectangle
    printf("Area of rectangle = %f sq. units", area);

  
    return 0;
}
