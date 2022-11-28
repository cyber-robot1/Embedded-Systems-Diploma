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
     (flag)=> is like a boolean variable set initially to 1 (true)
     (mx_prime)=> the maximum prime factor of the given number
    */
    int num, mx_prime=0;
    unsigned char flag=1;

    // Getting a number from user
    printf("Input any number: ");
    scanf("%d", &num);

    // Getting maximum prime factor of the given number
    for(int i=2; i<=num; i++)
    {
        if(flag)
        {
            if(num%i==0)
            {
                if(isPrime(i))
                    mx_prime=i;
            }
        }
        else
        {
            if(num%i==0)
            {
                if(isPrime(i))
                {
                    if(i>mx_prime)
                        mx_prime=i;
                }
            }
        }
    }

    // Printing all prime factors of the given number
    printf("Prime factors of %d: ", num);
    for(int i=2; i<=num; i++)
    {
        if(isPrime(num))
        {
            if(i==num)
                printf("%d", i);
            else
            {
                if(num%i==0)
                {
                    if(isPrime(i))
                        printf("%d, ", i);
                }
            }
        }
        else
        {
            if(i==mx_prime)
                printf("%d", i);
            else
            {
                if(num%i==0)
                {
                    if(isPrime(i))
                        printf("%d, ", i);
                }
            }
        }
    }

    return 0;
}
