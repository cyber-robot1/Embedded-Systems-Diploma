/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int side1, side2, side3;
    
    // Getting the three sides from user
    printf("Input first side: ");
    scanf("%d", &side1);
    printf("Input second side: ");
    scanf("%d", &side2);
    printf("Input third side: ");
    scanf("%d", &side3);
    
    // Checking if the three entered sides form a triangle or not
    if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2))
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");

    return 0;
}
