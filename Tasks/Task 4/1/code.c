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

    // we can't divide any number by zero
    if(m==0)
        printf("Math Error !!\n");
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
        {
            n-=m;
            c++;
        }

        if(flagN)
            c*=-1;
        if(flagM)
            c*=-1;

        printf("result = %d", c);
    }

    return 0;
}
