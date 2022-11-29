  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */


#include <stdio.h>
#include <stdlib.h>

// C function to calculate the factorial of the given number
int fact(int n)
{
    int fact=1;

    // Getting factorial of the given number
    for(int i=1; i<=n; i++)
        fact=fact*i;

    return fact;
}

// C function to check if the given number is strong or not
unsigned char isStrongNum(int num)
{

    /*
    (sum)=> sum of factorial of digits of the given number
    (fact_d)=> factorial of each digit in the given number
    */
    int digit, sum=0, fact_d, temp;

    // (flag)=> is like a boolean variable set initially to 1 (true)
    unsigned char flag=1;

    // to save the value of the given number to be used later if needed
    temp=num;

    // Calculating sum of factorial of each digit in the given number
    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        fact_d=fact(digit);
        sum=sum+fact_d;
    }

    // Checking if the given number is strong or not
    if(sum==temp)
        flag=1;
    else
        flag=0;

    return flag;
}

int main()
{

    /*
    (upper)=> upper limit given by user
    (lower)=> lower limit given by user
    (mx_strong)=> maximum strong number between both lower and upper limits
    */
    int upper, lower, mn=0, mx=0, mx_strong=0;

    // (flag)=> is like a boolean variable set initially to 1 (true)
    unsigned char flag=1;

    // Getting lower and upper limits from user
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
    scanf("%d", &upper);

    if(lower<upper)
    {
        mn=lower;
        mx=upper;
    }
    else if(lower>upper)
    {
        mn=upper;
        mx=lower;
    }

    // Getting maximum strong number between both lower and upper limits
    for(int i=mn; i<=mx; i++)
    {
        if(flag)
        {
            if(isStrongNum(i))
                mx_strong=i;

            flag=0;
        }

        else
        {
            if(isStrongNum(i))
            {
                if(i>=mx_strong)
                    mx_strong=i;
            }
        }
    }

    // Printing strong numbers between both lower and upper limits
    printf("Strong numbers between %d-%d:\n", mn, mx);
    for(int i=mn; i<=mx; i++)
    {
        if(isStrongNum(mx))
        {
            if(i==mx)
                printf("%d", i);
            else
            {
                if(isStrongNum(i))
                    printf("%d, ", i);
            }
        }

        else
        {
            if(i==mx_strong)
                printf("%d", i);
            else
            {
                if(isStrongNum(i))
                    printf("%d, ", i);
            }
        }
    }

    return 0;
}
