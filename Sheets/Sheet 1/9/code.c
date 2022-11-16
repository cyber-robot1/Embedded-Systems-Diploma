/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;

    // (flag)=> is set to be like a boolean variable and initially set to 1 (true)
    unsigned char flag=0;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the given number is a perfect square or not
    for(int i=1; i<=num; i++)
    {
        if(num==i*i)
            flag=1;
    }

    if(flag)
        printf("%d is a perfect square", num);
    else
        printf("%d is not a perfect square", num);

    return 0;
}
