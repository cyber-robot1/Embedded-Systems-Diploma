/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Input num: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
        printf("%d * %d = %d\n", n, i, n*i);

    return 0;
}
