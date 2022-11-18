/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (mx)=> max between two numbers
    int num1, num2, mx=0;

    // Getting two numbers from user
    printf("Input num1: ");
    scanf("%d", &num1);
    printf("Input num2: ");
    scanf("%d", &num2);

    // Getting the maximum between two numbers
    if(num1>num2)
        mx=num1;
    else
        mx=num2;

    // Printing the max between two numbers
    printf("Maximum = %d", mx);

    return 0;
}
