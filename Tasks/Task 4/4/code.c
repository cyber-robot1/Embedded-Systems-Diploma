  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, sum=0, digit=0;
    printf("enter a number: ");
    scanf("%d", &n);
    
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    
    printf("sum of digits = %d", sum);

    return 0;
}
