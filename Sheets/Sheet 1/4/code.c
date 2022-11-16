/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, result=0;

    // Getting two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Getting multiplication of num1 and num2 without using * operator
    for(int i=1; i<=num2; i++)
    {
        result = result + num1;
    }

    // Printing multiplication of num1 and num2 without using * operator
    printf("Result = %d", result);

    return 0;
}
