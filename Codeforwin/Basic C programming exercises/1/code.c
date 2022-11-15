/*************************************************************************************/
/* Author: Karim Tarek Ibrahim                                                      */
/* Problem link: https://codeforwin.org/2015/05/c-program-to-add-two-numbers.html  */

/*
* C program to find sum of two numbers 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    
    // Read two numbers from the user
    printf("Input first number: ");
    scanf("%d", &x);
    printf("Input second number: ");
    scanf("%d", &y);
    
    // Print the sum of two numbers 
    printf("Sum = %d", x+y);


    return 0;
}
