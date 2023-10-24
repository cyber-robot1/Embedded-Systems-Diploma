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

    if(x==0 || x==1)
        printf("Not prime !!\n");
    else
    {
        char flag=1;
        for(int i=2; i<=x/2; i++)
        {
            if(x%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("Prime\n");
        else
            printf("Not prime !!\n");
    }

    return 0;
}
