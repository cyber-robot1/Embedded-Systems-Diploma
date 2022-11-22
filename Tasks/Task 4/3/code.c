/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// (n)=> number to check if it's prime or not
unsigned char isPrime(int n)
{
    int c=0;
    unsigned char flag=1;

    if(n==1 || n==0)
        flag=0;
    else
    {
        for(int i=2; i<=n-1; i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
        if(c>0)
            flag=0;
        else
            flag=1;
    }
    return flag;
}

// (n)=> No. of prime numbers to be generated
void printPrimes(int n)
{
    int i=1;
    while(n--)
    {
        for(i;; i++)
        {
            if(isPrime(i))
            {
                printf("%d ", i);
                i++;
                break;
            }
        }
    }
}

int main()
{
    // (x)=> No. of prime numbers from user
    int x;

    while(1)
    {
        // Getting No. of prime numbers from user
        printf("Enter No. of primes: ");
        scanf("%d", &x);

        // Generate No. of prime numbers given by user
        printPrimes(x);

        // Print new line
        printf("\n");
    }

    return 0;
}
