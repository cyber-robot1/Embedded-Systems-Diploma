/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y;
    int mx, mn;
    scanf("%d%d", &x, &y);

    if(x>y)
    {
        mx=x;
        mn=y;
    }
    else
    {
        mx=y;
        mn=x;
    }

    for(int i=mx-1; i>mn; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
