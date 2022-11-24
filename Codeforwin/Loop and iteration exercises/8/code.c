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
    {
        if(i%2!=0)
            sum=sum+i;
    }

    printf("Sum of odd numbers between 1 to %d: %d", n, sum);

    return 0;
}
