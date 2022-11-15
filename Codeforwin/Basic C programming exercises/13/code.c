/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    // Getting the two angles of the triangle from user
    printf("Enter first angle: ");
    scanf("%d", &a);
    printf("Enter second angle: ");
    scanf("%d", &b);

    // Getting the third angle
    c = 180 - (a+b);

    // Printing the third angle
    printf("Third angle = %d", c);

    return 0;
}
