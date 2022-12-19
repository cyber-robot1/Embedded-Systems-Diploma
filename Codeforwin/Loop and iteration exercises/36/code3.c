  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

 /*
 No. of the specific term to be printed from Fibonacci series is given by the user
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (c_first)=> the first term of the Fibonacci series which is initially set to 0
     (c_second)=> the second term of the Fibonacci series which is initially set to 1
     (c_sum)=> sum of the first and the second term each time to form the Fibonacci series
     (n)=> No. of the specific term to be printed from Fibonacci series and is given by the user
    */
    unsigned int c_first=0, c_second=1, c_sum=0, n, temp;

    // Getting the No. of the specific term to be printed from Fibonacci series given by the user
    printf("Enter No. of term: ");
    scanf("%d", &n);

    // to save the value of n to be used later if needed
    temp=n;

    // Calculating and Printing the specific term to be printed from Fibonacci series based on its number given by the user
    if(n==1)
        printf("Fib(%d) = %d", 1, 0);

    else if(n==2)
        printf("Fib(%d) = %d", 2, 1);

    else
    {
        while(n--)
        {
            if(n==1)
                printf("Fib(%d) = %d", temp, c_sum);

            else
            {
                c_sum=c_first+c_second;
                c_first=c_second;
                c_second=c_sum;
            }
        }
    }

    return 0;
}
