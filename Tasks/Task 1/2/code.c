  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    
    // x is greater than y
    if(x>y)
        printf("max = %d", x);

    // y is greater than x
    else if(x<y)
        printf("max = %d", y);
        
    // x and y are equal
    else
        printf("equal numbers");

    return 0;
}
