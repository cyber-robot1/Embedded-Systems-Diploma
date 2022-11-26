/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // (rev_n)=> the reverse number of the given number
    int n, digit, rev_n=0, temp;

    // Getting number from user
    printf("Input number: ");
    scanf("%d", &n);

    // to store the original value of the given number to be used if needed
    temp=n;

    // Calculating reverse of the given number
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev_n=(rev_n*10)+digit;
    }

    // Checking if the given number is palindrome or not
    if(temp==rev_n)
        printf("%d is palindrome", temp);
    else
        printf("%d is not palindrome", temp);

    return 0;
}
