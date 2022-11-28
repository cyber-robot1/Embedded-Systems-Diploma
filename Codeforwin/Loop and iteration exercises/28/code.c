  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

// C function to check if the given number is prime or not
unsigned char isPrime(int num)
{
    /*
    (flag)=> is like a boolean variable and set initially to 1 (true) if the given number is prime
    and it's set to zero (false) if the given number is not prime
    */
    unsigned char flag=1;

    // Checking if the given number is prime or not
    if(num==0 || num==1)
        flag=0;
    else
    {
        for(int i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
    }

    return flag;
}

int main()
{

    /*
     (lower)=> lower limit of the loop
     (upper)=> upper limit of the loop
     (sum)=> sum of all prime numbers from lower limit to upper limit
    */
    int lower, upper, sum=0, mn=0, mx=0;

    // Getting upper and lower limits of the loop from user
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    if(lower<upper)
    {
        mn=lower;
        mx=upper;
    }

    else if(lower>upper)
    {
        mn=upper;
        mx=lower;
    }

    // Calculating sum of all prime numbers between lower limit and upper limit
    for(int i=mn; i<=mx; i++)
    {
        if(isPrime(i))
            sum=sum+i;
    }

    // Printing sum of all prime numbers between lower limit and upper limit
    printf("Sum of all prime numbers between %d to %d = %d", mn, mx, sum);

    return 0;
}
