/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Printing alphabets from a to z
    printf("Alphabets: \n");

    for(int i=97; i<=122; i++)
    {
        if(i==122)
            printf("%c", i);
        else
            printf("%c, ", i);
    }

    return 0;
}
