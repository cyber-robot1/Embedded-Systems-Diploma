/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num;
    
    /*
     (flag)=> is set to be like a boolean variable and set initially to 1 (true)
     (c)=> counter variable
    */
    unsigned char flag=1, c=0;

    // Getting number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the given number is prime or not
    if(num==1 || num==0)
        flag=0;
    else
    {
        for(int i=1; i<=num; i++)
        {
            if(num%i==0)
                c++;
        }
        if(c==2)
            flag=1;
        else
            flag=0;
    }
    
    // Printing message if the given number is a prime or not
    if(flag)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);

    return 0;
}
