/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &num);

    // Checking if the number is even or odd
    if(num%2==0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);

    return 0;
}
