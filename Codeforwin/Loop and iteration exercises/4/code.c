/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Input upper range: ");
    scanf("%d", &n);

    printf("Even numbers between 1 to %d:\n", n);

    for(int i=1; i<=n; i++)
    {
        if(i==n)
        {
            if(i%2==0)
                printf("%d", i);
        }
        else
        {
            if(i%2==0)
                printf("%d, ", i);
        }
    }

    return 0;
}
