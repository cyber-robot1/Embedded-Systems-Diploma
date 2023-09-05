  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,mn=0,mx=0;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    
    if(x>y)
    {
        mn=y;
        mx=x;
    }
    else
    {
        mn=x;
        mx=y;
    }

    for(int i=mx-1; i>mn; i--)
        printf("%d ", i);

    return 0;
}
