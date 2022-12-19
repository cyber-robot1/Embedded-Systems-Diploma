  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

/*
   Starting and Ending terms of Fibonacci series are given by the user
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (c_first)=> the first term of the Fibonacci series which is initially set to 0
     (c_second)=> the second term of the Fibonacci series which is initially set to 1
     (c_sum)=> sum of the first and the second term each time to form the Fibonacci series
     (start)=> Starting term of Fibonacci series given by the user
     (end)=> Ending term of Fibonacci series given by the user
     (mx)=> the maximum term given by the user
     (mn)=> the minimum term given by the user
    */
    unsigned int c_first=0, c_second=1, c_sum=0, start, end;
    unsigned int mx=0, mn=0, n=1;

    // Getting First and Ending terms from user
    printf("Enter First term: ");
    scanf("%u", &start);
    printf("Enter Ending term: ");
    scanf("%u", &end);

    // Calculating minimum and maximum terms given by the user
    if(start>end)
    {
        mx=start;
        mn=end;
    }
    else if(start<end)
    {
        mx=end;
        mn=start;
    }
    else
    {
        mx=start;
        mn=end;
    }

    // Calculating and Printing the Fibonacci series based on the range from the starting to the ending terms given by the user
    while(1)
    {
        n++;
        if(n>=mn && n<=mx)
        {
            if(n==mx)
            {
                printf("%d\n", c_sum);
                break;
            }
            else
            {
                printf("%d, ", c_sum);
            }
            c_sum=c_first+c_second;
            c_first=c_second;
            c_second=c_sum;
        }
        else
        {
            c_sum=c_first+c_second;
            c_first=c_second;
            c_second=c_sum;
        }
    }

    return 0;
}
