/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    // Getting number of natural numbers to be printed from user
    printf("Input upper limit: ");
    scanf("%d", &n);

    // Printing natural numbers from 1 to n
    printf("Natural numbers from 1 to %d: ", n);

    for(int i=1; i<=n; i++)
    {
        if(i==n)
            printf("%d", i);
        else
            printf("%d, ", i);
    }

    return 0;
}
