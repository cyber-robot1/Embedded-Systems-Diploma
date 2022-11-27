/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int base, exponent;
    unsigned long long int power=1;
    double temp;

    // Getting base and exponent from user
    printf("Input base: ");
    scanf("%d", &base);
    printf("Input exponent: ");
    scanf("%d", &exponent);

    // Checking if the sign of the given exponent (+, -, 0)

    // exponent is positive (+ve)
    if(exponent>0)
    {
        for(int i=1; i<=exponent; i++)
            power=power*base;
        
        printf("%d ^ %d = %llu", base, exponent, power);
    }

    // exponent is negative (-ve)
    else if(exponent<0)
    {
        for(int i=1; i<=abs(exponent); i++)
            power=power*base;
        
        temp=1/(long double)power;                       // Type casting for avoiding Integer Division
        
        printf("%d ^ %d = %lf",base, exponent, temp);
    }

    // exponent is zero
    else
    {
        printf("%d ^ 0 = %d", base, 1);
    }

    return 0;
}
