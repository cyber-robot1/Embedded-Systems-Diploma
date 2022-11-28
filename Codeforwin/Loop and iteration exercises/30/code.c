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

    while(num!=0)
    {
        c++;
        num=num/10;
    }

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

    int num;

    // Getting a number from user
    printf("Input any number: ");
    scanf("%d", &num);

    if(isArmstrongNum(num))
        printf("%d is armstrong", num);
    else
        printf("%d is not armstrong", num);

    return 0;
}
