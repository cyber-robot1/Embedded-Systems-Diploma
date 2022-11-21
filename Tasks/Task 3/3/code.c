/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, rem;
    while(1)
    {
        scanf("%d", &x);

        rem = x%5;
        if(rem==0)
            printf("%d\n", x);
        else
        {
            if(rem==1 || rem==2)
                printf("%d\n", x-rem);

            else if(rem==3 || rem==4)
                printf("%d\n", (x-rem)+5);
        }
    }
  
    return 0;
}
