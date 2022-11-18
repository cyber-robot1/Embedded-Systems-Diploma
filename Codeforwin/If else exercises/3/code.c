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

    // Checking if the entered number is positive, negative or zero
    if(num>0)
        printf("%d is positive", num);

    else if(num<0)
        printf("%d is negative", num);

    else
        printf("zero");

    return 0;
}
