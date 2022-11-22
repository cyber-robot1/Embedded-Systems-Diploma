/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int x;
    
    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &x);
    
    // Checking if the given number is prime or not
    if(isPrime(x))
        printf("%d is Prime", x);
    else
        printf("%d is Not Prime", x);

    return 0;
}
