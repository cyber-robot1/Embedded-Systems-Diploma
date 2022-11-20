/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     (f_a)=> first angle
     (s_a)=> second angle
     (t_a)=> third angle
    */
    int f_a, s_a, t_a;

    // Getting the three angles from user
    printf("Input first angle: ");
    scanf("%d", &f_a);
    printf("Input second angle: ");
    scanf("%d", &s_a);
    printf("Input third angle: ");
    scanf("%d", &t_a);

    if(f_a>0 && s_a>0 && t_a>0)
    {
        if((f_a+s_a+t_a)==180)
            printf("The triangle is valid");
        else
            printf("The triangle is not valid");
    }
    else
        printf("The triangle is not valid");

    return 0;
}
