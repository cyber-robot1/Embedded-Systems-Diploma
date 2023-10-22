  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,c=0;
    char flagN=0, flagM=0;
    
    scanf("%d%d",&n,&m);
    
    if(m==0)
        printf("Math Error\n");
    else
    {
        if(n<0)
        {
            n*=-1;
            flagN=1;
        }
        if(m<0)
        {
            m*=-1;
            flagM=1;
        }
        while(n>=m)
        {
            n-=m;
            c++;
        }

        if(flagN)
            c*=-1;
        if(flagM)
            c*=-1;

        printf("%d", c);
    }
  
    return 0;
}
