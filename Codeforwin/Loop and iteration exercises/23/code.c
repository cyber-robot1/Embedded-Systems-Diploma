  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    // Getting a number from user
    printf("Input number: ");
    scanf("%d", &num);

    // Printing all factors of the given number
    printf("Factors of %d: ", num);
    for(int i=num; i>=1; i--)
    {
        if(i==1)
        {
            if(num%i==0)
                printf("%d", num/i);
        }
        else
        {
            if(num%i==0)
                printf("%d, ", num/i);
        }
    }

    return 0;
}
