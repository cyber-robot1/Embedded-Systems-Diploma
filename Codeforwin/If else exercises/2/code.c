/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (mx)=> max between three numbers
    int num1, num2, num3, mx=0;

    // Getting three numbers from user
    printf("Input num1: ");
    scanf("%d", &num1);
    printf("Input num2: ");
    scanf("%d", &num2);
    printf("Input num3: ");
    scanf("%d", &num3);

    // Getting the maximum between two numbers
    if(num1>=num2 && num1>=num3)
        mx=num1;
    else if(num2>=num1 && num2>=num3)
        mx=num2;
    else
        mx=num3;

    // Printing the max between the three numbers
    printf("Maximum is: %d", mx);

    return 0;
}
