/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (x)=> num 1
     (y)=> num 2
    */
    int x, y, res=0, x_c;

    // Getting two numbers from user
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    x_c = x;

    // Calculating Quotient without using / operator
    if(y==0)
        printf("%d / %d = Math Error (Undefined Mathematical Operation)", x, y);
    else
    {
        while(x>=y)
        {
            x = x - y;
            res++;
        }
        printf("%d / %d = %d", x_c, y, res);
    }

    return 0;
}
