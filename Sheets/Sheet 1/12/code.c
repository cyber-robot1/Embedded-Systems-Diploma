/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, sum=0;

    // (flag)=> counter to count number of odd numbers entered by user
    unsigned char flag=0;

    while(1)
    {
        scanf("%d", &num);
        if(num%2==0)
        {
            sum = sum + num;
            printf("Sum = %d\n", sum);
        }
        else
        {
            flag++;
        }
        if(flag>1)
        {
            printf("bye");
            break;
        }
    }

    return 0;
}
