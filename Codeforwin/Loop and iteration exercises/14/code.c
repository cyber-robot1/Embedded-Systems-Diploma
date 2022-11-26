/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     (sum)=> sum of all digits of the given number
    */
    int n, sum=0, digit=0;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &n);

    // Calculating sum of all digits of the given number
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

    // Printing sum of all digits of the given number
    printf("Sum of digits: %d", sum);

    return 0;
}
