  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int base,exponent, pow=1;

    // getting base and exponent from user
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter exponent: ");
    scanf("%d", &exponent);

    for(int i=1; i<=exponent; i++)
        pow*=base;

    printf("%d power %d = %d", base,exponent,pow);

    return 0;
}
