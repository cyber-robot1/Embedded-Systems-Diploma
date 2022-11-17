/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    unsigned int x=1, num;
    // (flag)=> is set to be like a boolean variable, and set initially to 0 (false)
    unsigned char flag=0, i=0;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the entered number is a base of 2 or not
    while(x<=num)
    {
        x=pow(2, i);
        if(x==num)
        {
            flag=1;
            break;
        }
        i++;
    }

    // Printing if the entered number is a base of 2 or not
    if(flag)
        printf("Number is a base of 2");
    else
        printf("Number is not a base of 2");

    return 0;
}
