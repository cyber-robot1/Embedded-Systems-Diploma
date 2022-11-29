  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// C function to check if the given number is armstrong or not
unsigned char isArmstrongNum(int num)
{
    /*
    (sum)=> sum of each digit of the given number raised to the power of the No. of digits
    (c)=> No. of digits in the given number
    */
    int sum=0, digit, temp1, temp2, c=0;

    // (flag)=> is like a boolean variable set initially to 1 (true)
    unsigned char flag=1;

    // to save the value of the given number to be used later if needed
    temp1=num;
    temp2=num;

    // Getting No. of digits in the given number
    while(num!=0)
    {
        c++;
        num=num/10;
    }

    // Getting sum of all digits in the given number raised to the No. of the digits
    while(temp1!=0)
    {
        digit=temp1%10;
        temp1=temp1/10;
        sum=sum+pow(digit, c);
    }

    // Checking if the given number is armstrong or not
    if(sum==temp2)
        flag=1;
    else
        flag=0;

    return flag;
}

int main()
{

    // (mx_arm)=> maximum armstrong number between both lower and upper limits
    int lower, upper, mn=0, mx=0, mx_arm=0;

    // (flag)=> is like a boolean variable and set initially to 1 (true)
    unsigned char flag=1;

    // Getting upper and lower limits from user
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
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

    // Getting maximum armstrong number between both lower and upper limits
    for(int i=mn; i<=mx; i++)
    {
        if(flag)
        {
            if(isArmstrongNum(i))
                mx_arm=i;
            
            flag=0;
        }
        else
        {
            if(isArmstrongNum(i))
            {
                if(i>=mx_arm)
                    mx_arm=i;
            }
        }
    }

    // Printing armstrong numbers between both lower and upper limits
    printf("Armstrong number between %d to %d are:\n", mn, mx);
    for(int i=mn; i<=mx; i++)
    {
        if(isArmstrongNum(mx))
        {
            if(i==mx)
                printf("%d", i);
            else
            {
                if(isArmstrongNum(i))
                    printf("%d, ", i);
            }
        }

        else
        {
            if(i==mx_arm)
                printf("%d", i);
            else
            {
                if(isArmstrongNum(i))
                    printf("%d, ", i);
            }
        }
    }

    return 0;
}
