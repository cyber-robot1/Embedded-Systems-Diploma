/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

/*
Write a C program to take even numbers from user and print the sum of them, 
after each entry if the user enters 2 odd numbers "not consecutive" the program print "bye" and stop.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, sum=0;

    // (flag)=> counter to count number of odd numbers entered by user
    unsigned char flag=0;

    while(1)
    {
        scanf("%d", &num);
        if(num%2==0)
        {
            sum = sum + num;
            printf("Sum = %d\n", sum);
        }
        else
        {
            flag++;
        }
        if(flag>1)
        {
            printf("bye");
            break;
        }
    }

    return 0;
}
