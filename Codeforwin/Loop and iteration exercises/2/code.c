/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    // Getting number of natural numbers to be printed from user
    printf("Input N: ");
    scanf("%d", &n);

    // Printing natural numbers from 1 to n
    printf("Natural numbers from %d-1 in reverse: \n", n);

    for(int i=n; i>=1; i--)
    {
        if(i==1)
            printf("%d", i);
        else
            printf("%d, ", i);
    }

    return 0;
}
