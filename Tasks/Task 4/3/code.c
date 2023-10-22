  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, digits=0;
    printf("enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        digits++;
        n/=10;
    }

    printf("No. of digits = %d", digits);

    return 0;
}
