  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

// C function to check if the given number is perfect or not
unsigned char isPerfectNum(unsigned int num)
{
    // (sum)=> sum of all divisors of the given number
    unsigned int sum=0;

    // (flag)=> is like a boolean variable set initially to 1 (true)
    unsigned char flag=1;

    // Getting sum of all divisors of the given number
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
            sum=sum+i;
    }

    // Check if the given number is perfect or not
    if(sum==num)
        flag=1;
    else
        flag=0;

    return flag;
}

int main()
{

    /*
    (upper)=> upper limit given by user
    (mx_perf)=> maximum perfect number between both 1 and upper limit
    */
    int upper, mx_perf=0;

    // (flag)=> is like a boolean variable set initially to 1 (true)
    unsigned char flag=1;

    // Getting upper limit from user
    printf("Input upper limit: ");
    scanf("%d", &upper);

    // Getting maximum perfect number between both 1 and upper limit
    for(int i=1; i<=upper; i++)
    {
        if(flag)
        {
            if(isPerfectNum(i))
                mx_perf=i;
            
            flag=0;
        }
        
        else
        {
            if(isPerfectNum(i))
            {
                if(i>=mx_perf)
                    mx_perf=i;
            }
        }
    }

    // Printing all perfect numbers from 1 to upper limit
    printf("Perfect numbers between 1 to %d: ", upper);
    for(int i=1; i<=upper; i++)
    {
        if(isPerfectNum(upper))
        {
            if(i==upper)
                printf("%d", i);
            else
            {
                if(isPerfectNum(i))
                    printf("%d, ", i);
            }
        }
        
        else
        {
            if(i==mx_perf)
                printf("%d", i);
            else
            {
                if(isPerfectNum(i))
                    printf("%d, ", i);
            }
        }
    }

    return 0;
}
