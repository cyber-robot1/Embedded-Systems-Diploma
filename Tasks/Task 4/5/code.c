  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int base,exponent, pow=1;
    char flag=0;

    // getting base and exponent from user
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter exponent: ");
    scanf("%d", &exponent);

    if(exponent<0)
    {
        exponent*=-1;
        flag=1;
    }

    for(int i=1; i<=exponent; i++)
        pow*=base;

    if(flag)
    {
        double result=(double)1/pow;
        printf("%d ^ %d = %f", base,exponent,result);
    }
    else
        printf("%d power %d = %d", base,exponent,pow);

    return 0;
}
