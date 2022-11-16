/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, sum = 0;
    int mx, mn;

    // Getting two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        mx=num1;
        mn=num2;
    }
    else
    {
        mx=num2;
        mn=num1;
    }

    // Getting sum of all numbers between num1 and num2 execlusively
    for(int i=mn+1; i<mx; i++)
    {
        sum = sum + i;
    }

    // Printing sum of all numbers between num1 and num2 execlusively
    printf("Sum = %d", sum);

    return 0;
}
