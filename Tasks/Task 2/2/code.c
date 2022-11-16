/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //(t)=> number of test cases (number of nums taken from user)
    int t, n, sum=0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("Sum of numbers = %d", sum);

    return 0;
}
