/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (t)=> number of test cases: number of nums entered by user
    int t, n, sum=0;

    // Getting number of test cases from user
    printf("Enter number of nums: ");
    scanf("%d", &t);

    // Getting sum of all numbers entered by user
    while(t--)
    {
        scanf("%d", &n);
        sum = sum + n;
    }

    // Printing sum of all numbers entered by user
    printf("Sum = %d", sum);


    return 0;
}
