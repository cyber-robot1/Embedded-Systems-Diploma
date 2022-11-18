/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    // Getting a number from user
    printf("Input number: ");
    scanf("%d", &num);

    // Checking if the number is divisible by 5 and 11
    if(num%5==0 && num%11==0)
        printf("Number is divisible by 5 and 11");
    else
        printf("Number is not divisible by 5 and 11");

    return 0;
}
