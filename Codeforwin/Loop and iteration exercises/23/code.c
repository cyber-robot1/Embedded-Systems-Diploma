  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int num;
    unsigned long long int fact=1;

    // Getting a number from user
    printf("Input number: ");
    scanf("%d", &num);

    // Calculating factorial of the given number
    for(int i=1; i<=num; i++)
        fact=fact*i;

    // Printing factorial of the given number
    printf("Factorial of %d: %llu", num, fact);

    return 0;
}
