  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

/*
    No. of terms of Fibonacci series is given by the user
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (c_first)=> the first term of the Fibonacci series which is initially set to 0
     (c_second)=> the second term of the Fibonacci series which is initially set to 1
     (c_sum)=> sum of the first and the second term each time to form the Fibonacci series
     (n)=> No. of terms of Fibonacci series given by the user
    */
    unsigned int c_first=0, c_second=1, c_sum=0, n;

    // Getting No. of terms of the Fibonacci series from user
    printf("Input number of terms: ");
    scanf("%u", &n);

    // Calculating and Printing the Fibonacci series based on the No. of entered terms
    printf("Fibonacci series:\n");

    if(n==1)                              // One Term
        printf("%u\n", 0);

    else if(n==2)                        // Two Terms
        printf("%u, %u\n", 0, 1);

    else if(n==3)                       // Three Terms
        printf("%u, %u, %u", 0, 1, 1);

    else                               // More than three terms
    {
        for(int i=1; i<=n;)
        {
            if(i==1)
            {
                c_sum=c_first+c_second;
                printf("%u, %u, %u, ", c_first, c_second, c_sum);
                c_first=c_second;
                c_second=c_sum;
                i+=3;
            }
            else
            {
                if(i==n)
                {
                    c_sum=c_first+c_second;
                    printf("%u\n", c_sum);
                    c_first=c_second;
                    c_second=c_sum;
                }
                else
                {
                    c_sum=c_first+c_second;
                    printf("%u, ", c_sum);
                    c_first=c_second;
                    c_second=c_sum;
                }
                i++;
            }
        }
    }

    return 0;
}
