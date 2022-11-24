/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // (c)=> counter
    int n, c=0;

    printf("Input num: ");
    scanf("%d", &n);

    // Counting No. of digits of the given number
    while(n!=0)
    {
        n=n/10;
        c++;
    }

    // Printing No. of digits of the given number
    printf("Number of digits: %d", c);

    return 0;
}
