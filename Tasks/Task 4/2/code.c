  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,c=0;
    char flagN=0, flagM=0;

    // getting two numbers from user
    printf("enter first number: ");
    scanf("%d", &n);
    printf("enter second number: ");
    scanf("%d",&m);

    // we can't divide by zero, so reminder by zero is undefined
    if(m==0)
        printf("Undefined !!\n");
    else
    {
        // if first number is negative
        if(n<0)
        {
            n*=-1;
            flagN=1;
        }

        // if second number is negative
        if(m<0)
        {
            m*=-1;
            flagM=1;
        }

        while(n>=m)
            n-=m;

        if(flagN)
            n*=-1;

        printf("reminder = %d", n);
    }

    return 0;
}
