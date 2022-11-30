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
     (mx_prime)=> maximum prime number between lower and upper limits
     (flag)=> is like a boolean variable and set to be 1 (true) initially
    */
    int lower, upper;
    unsigned char flag=1;
    int mx=0, mn=0, mx_prime=0;

    // Getting upper and lower limits of the loop from user
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
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

    // Getting the maximum prime number between lower limit and upper limit
    for(int i=mn; i<=mx; i++)
    {
        if(isPrime(i))
            mx_prime=i;
    }

    // Printing all prime numbers between lower limit and upper limit
    printf("Prime numbers between %d-%d: ", mn, mx);
    for(int i=mn; i<=mx; i++)
    {
        if(isPrime(mx))
        {
            if(i==mx)
                printf("%d", i);

            else
            {
                if(isPrime(i))
                    printf("%d, ", i);
            }
        }

        else
        {
            if(i==mx_prime)
                printf("%d", i);

            else
            {
                if(isPrime(i))
                    printf("%d, ", i);
            }
        }
    }

    return 0;
}
