/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (fact)=> factorial variable
    unsigned int num, fact=1;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Getting factorial of the number
    for(int i=num; i>1; i--)
    {
        fact = fact * i;
    }

    // Printing factorial of the number
    printf("Factorial = %d", fact);

    return 0;
}
