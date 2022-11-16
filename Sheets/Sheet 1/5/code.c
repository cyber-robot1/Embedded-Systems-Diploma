/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, remainder=0;

    // Getting two numbers from user
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    // Getting remainder of x and y without using % operator
    remainder = x - ((x/y) * y);

    // Printing remainder of x and y without using % operator
    printf("%d mod %d = %d", x, y, remainder);


    return 0;
}
