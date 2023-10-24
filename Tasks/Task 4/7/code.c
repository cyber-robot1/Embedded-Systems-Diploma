  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    printf("enter a number: ");
    scanf("%u", &x);

    if(x==1)
        printf("Perfect Square\n");
    else
    {
        char flag=0;
        for(int i=2; i<=x/2; i++)
        {
            if(x==i*i)
            {
                flag=1;
                break;
            }
            else if(x<i*i)
                break;
        }
        if(flag)
            printf("Perfect Square\n");
        else
            printf("Not !!\n");
    }

    return 0;
}
