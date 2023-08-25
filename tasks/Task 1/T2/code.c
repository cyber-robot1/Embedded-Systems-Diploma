#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);

    if(x>=y)
    {
        if(x>=z)
            printf("%d is max", x);
        else
            printf("%d is max", z);
    }

    else if(y>=x)
    {
        if(y>=z)
            printf("%d is max", y);
        else
            printf("%d is max", z);
    }

    else if(z>=x)
    {
        if(z>=y)
            printf("%d is max", z);
        else
            printf("%d is max", y);
    }

    return 0;
}
