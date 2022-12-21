  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char num;
    
    // Getting a number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking if the given number is even or odd using bitwise operator AND (&)
    if(num&1)
        printf("%d is Odd", num);
    else
        printf("%d is Even", num);

    return 0;
}
