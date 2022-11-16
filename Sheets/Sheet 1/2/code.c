/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //(t)=> number of test cases: number of nums to be entered from user
    int t, n, mx, mn;

    // flag variables to be like boolean variables and are set to 1 (true) initially
    int flag1=1, flag2=1;

    // Getting number of test cases from user
    printf("Enter number of nums: ");
    scanf("%d", &t);

    // Getting maximum and minimum among numbers entered by user
    while(t--)
    {
        scanf("%d", &n);
        if(flag1)
        {
            mx=n;
            flag1=0;
        }
        else
        {
            if(n>=mx)
                mx=n;
        }
        if(flag2)
        {
            mn=n;
            flag2=0;
        }
        else
        {
            if(n<=mn)
                mn=n;
        }
    }

    // Printing maximum and minimum
    printf("Maximum = %d\n", mx);
    printf("Minimum = %d\n", mn);

    return 0;
}
