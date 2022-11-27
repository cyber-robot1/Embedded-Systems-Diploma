/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// C function to delete the last digit of the given number
int removeLDigit(int n)
{
    int new_num;
    new_num=n/10;
    return new_num;
}

int main()
{
    int n, result;

    // Getting a number from user
    printf("Input a number: ");
    scanf("%d", &n);

    result=removeLDigit(n);

    // Printing the number with the last digit deleted
    printf("Result = %d", result);

    return 0;
}
