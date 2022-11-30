  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>


int main()
{

    /*
    (c_0)=> No. of 0 digits in the given number
    (c_1)=> No. of 1 digits in the given number
    (c_2)=> No. of 2 digits in the given number
    (c_3)=> No. of 3 digits in the given number
    (c_4)=> No. of 4 digits in the given number
    (c_5)=> No. of 5 digits in the given number
    (c_6)=> No. of 6 digits in the given number
    (c_7)=> No. of 7 digits in the given number
    (c_8)=> No. of 8 digits in the given number
    (c_9)=> No. of 9 digits in the given number
    */
    int digit;
    unsigned long long int num;
    int c_0=0, c_1=0, c_2=0, c_3=0, c_4=0, c_5=0, c_6=0, c_7=0, c_8=0, c_9=0;

    // Getting a number from user
    printf("Input any number: ");
    scanf("%llu", &num);

    // Calculating frequency of each digit in the given number
    while(num!=0)
    {
        digit=num%10;
        num=num/10;

        if(digit==0)
            c_0++;

        else if(digit==1)
            c_1++;

        else if(digit==2)
            c_2++;

        else if(digit==3)
            c_3++;

        else if(digit==4)
            c_4++;

        else if(digit==5)
            c_5++;

        else if(digit==6)
            c_6++;

        else if(digit==7)
            c_7++;

        else if(digit==8)
            c_8++;

        else if(digit==9)
            c_9++;
    }

    // Printing frequency of each digit in the given number
    printf("Frequency of 0 = %d\n", c_0);
    printf("Frequency of 1 = %d\n", c_1);
    printf("Frequency of 2 = %d\n", c_2);
    printf("Frequency of 3 = %d\n", c_3);
    printf("Frequency of 4 = %d\n", c_4);
    printf("Frequency of 5 = %d\n", c_5);
    printf("Frequency of 6 = %d\n", c_6);
    printf("Frequency of 7 = %d\n", c_7);
    printf("Frequency of 8 = %d\n", c_8);
    printf("Frequency of 9 = %d", c_9);

    return 0;
}
