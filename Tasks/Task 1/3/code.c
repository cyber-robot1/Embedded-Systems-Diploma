/*********************************/
/* Author: Karim Tarek Ibrahim  */
/*******************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int x, y;                 // (x), (y)=> are the two operands.
    int z;                   // (z)=> number of mathematical operation the end-user will choose to do.
    int result;             // (result)=> result of the mathematical operation.
    float quot;            // (quot)=> result of division operation.

    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("\n");
    printf("********** Welcome to Calculator System **********\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Reminder\n");
    printf("**************************************************\n");


    printf("Please enter one of the above: ");
    scanf("%d", &z);
    printf("\n");

    if(z==1)
    {
        result=x+y;
        printf("result = %d\n", result);
        printf("**************************************************");
    }
    else if(z==2)
    {
        result=x-y;
        printf("result = %d\n", result);
        printf("**************************************************");
    }
    else if(z==3)
    {
        result=x*y;
        printf("result = %d\n", result);
        printf("**************************************************");
    }
    else if(z==4)
    {
        if(y==0)
        {
            // Dividing by zero is undefined operation.
            printf("Math Error\n");
            printf("**************************************************");
        }
        else
        {
            result=(float)x/(float)y;                                               // Type Casting to avoid Integer Division
            printf("result = %f\n", result);
            printf("**************************************************");
        }
    }
    else if(z==5)
    {
        result=x%y;
        printf("result = %d\n", result);
        printf("**************************************************");
    }

    return 0;
}
