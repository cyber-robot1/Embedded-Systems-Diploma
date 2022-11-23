/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b, c, temp;
    float Root1, Root2, r;

    // Getting a, b and c from user
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    temp=(b*b)-(4*a*c);

    // there're two real roots
    if(temp>0)
    {
        r=sqrt(temp);
        b=-1*b;
        Root1=(b+r)/(2*a);
        Root2=(b-r)/(2*a);
        printf("Root1: %.2f\n", Root1);
        printf("Root2: %.2f", Root2);
    }

    // there's only one root
    else if(temp==0)
    {
        b=-1*b;
        Root1=b/(2*a);
        printf("Root: %.2f", Root1);
    }

    // there're two complex roots
    else
    {
        printf("Complex Roots!");
    }

    return 0;
}
