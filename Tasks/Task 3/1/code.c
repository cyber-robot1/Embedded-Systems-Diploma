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
    int x, y, res=0, x_c, y_c;

    // Getting two numbers from user
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    x_c = x;
    y_c = y;

    // Calculating Quotient without using / operator
    if(y==0)
        printf("%d / %d = Math Error (Undefined Mathematical Operation)", x, y);
    else
    {

        if(x<0 && y<0)
        {
            x = -1 * x;
            y = -1 * y;

            while(x>=y)
            {
                x = x - y;
                res++;
            }
            printf("%d / %d = %d", x_c, y_c, res);
        }

        else if(x<0)
        {
            x = -1 * x;
            while(x>=y)
            {
                x = x - y;
                res++;
            }
            printf("%d / %d = %d", x_c, y, res*-1);
        }

        else if(y<0)
        {
            y = -1 * y;
            while(x>=y)
            {
                x = x - y;
                res++;
            }
            printf("%d / %d = %d", x_c, y_c, res*-1);
        }
    }

    return 0;
}
