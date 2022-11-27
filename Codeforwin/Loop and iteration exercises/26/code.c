  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    /*
    (flag)=> is like a boolean variable and set initially to 1 (true) if the given number is prime
    and it's set to zero (false) if the given number is not prime
    */
    unsigned char flag=1;

    // Getting a number from user
    printf("Input any number: ");
    scanf("%d", &num);

    // Checking if the given number is prime or not
    if(num==0 || num==1)
        flag=0;
    else
    {
        for(int i=2; i<num/2; i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
    }

    // Printing if the given number is prime or not
    if(flag)
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);

    return 0;
}
