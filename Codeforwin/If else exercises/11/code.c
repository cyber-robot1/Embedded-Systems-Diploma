/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    unsigned char week;

    // Getting a week number from user
    printf("Input week number: ");
    scanf("%d", &week);

    // Printing corresponding day of week name based on its number
    if((week<1) || (week>7))
        printf("Invalid input, please enter a digit from 1 to 7 !");
    else
    {
        if(week==1)
            printf("Monday");
        
        else if(week==2)
            printf("Tuesday");
        
        else if(week==3)
            printf("Wednesday");
        
        else if(week==4)
            printf("Thursday");
        
        else if(week==5)
            printf("Friday");
        
        else if(week==6)
            printf("Saturday");
        
        else if(week==7)
            printf("Sunday");
    }

    return 0;
}
