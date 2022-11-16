/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //(mx)=> max number among ten numbers entered by user
    int t, n, mx=0;    

    // (flag)=> is set to be like a boolean variable set initially by 1 (true)
    int flag=1;
    
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &n);
        if(flag)
        {
            mx = n;
            flag=0;                 // set to 0 (false)
        }
        else
        {
            if(n>=mx)
                mx=n;
        }
    }
    
    printf("Maximum number = %d", mx);

    return 0;
}
