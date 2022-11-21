/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

/*
  Write a C Program to implement a simple calculator with only the five basic operations:
  (Addition "+" - Subtraction "-" - Multiplication "*" - Division "/" - Reminder "%")
  by using characters
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;                     // (x), (y)=> are the two operands.
    int result;                  // (result)=> result of the mathematical operation.
    float quot;                 // (quot)=> result of division operation.
    char ch;                   // (ch)=> the mathematical operator (+, -, *, /, %)

    scanf("%d %c %d", &x, &ch, &y);

    if(ch=='+')
    {
        result=x+y;
        printf("%d", result);
    }
    else if(ch=='-')
    {
        result=x-y;
        printf("%d", result);
    }
    else if(ch=='*')
    {
        result=x*y;
        printf("%d", result);
    }
    else if(ch=='/')
    {
        if(y==0)
            printf("Math Error");
        else
        {
            result=(float)x/(float)y;          // Type Casting to avoid Integer Division
            printf("%d", result);
        }
    }
    else if(ch=='%')
    {
        result=x%y;
        printf("%d", result);
    }

    return 0;
}
