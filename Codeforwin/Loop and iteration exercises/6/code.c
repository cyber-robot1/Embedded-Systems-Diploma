/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, sum=0;

    printf("Input upper limit: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        sum=sum+i;

    printf("Sum of natural numbers 1-%d: %d", n, sum);

    return 0;
}
