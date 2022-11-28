  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (sum)=> sum of all divisors of the given number
    int num, sum=0;

    // Getting a number from user
    printf("Input any number: ");
    scanf("%d", &num);

    // Getting sum of all divisors of the given number
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    
    // Check if the given number is perfect or not
    if(sum==num)
        printf("%d is perfect number", num);
    else
        printf("%d is not perfect number", num);

    return 0;
}
