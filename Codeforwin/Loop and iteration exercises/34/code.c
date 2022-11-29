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

int main()
{

    /*
    (sum)=> sum of factorial of digits of the given number
    (fact_d)=> factorial of each digit in the given number
    */
    int num, digit, sum=0, fact_d, temp;

    // Getting a number from user
    printf("Input number: ");
    scanf("%d", &num);

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
        printf("%d is a strong number", temp);
    else
        printf("%d is not a strong number", temp);

    return 0;
}
