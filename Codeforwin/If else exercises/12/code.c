/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned char month;

    // Getting a month's number from user
    printf("Enter month number: ");
    scanf("%d", &month);

    // Printing number of days in the month
    if((month<1) || (month>12))
        printf("Invalid input, please enter a digit from 1 to 12 !");
    else
    {
        // January
        if(month==1)
            printf("31");
        
        // February
        else if(month==2)
            printf("28");
        
        // March
        else if(month==3)
            printf("31");
        
        // April
        else if(month==4)
            printf("30");
        
        // May
        else if(month==5)
            printf("31");
        
        // June
        else if(month==6)
            printf("30");
        
        // July
        else if(month==7)
            printf("31");
        
        // August
        else if(month==8)
            printf("31");
        
        // September
        else if(month==9)
            printf("30");
        
        // October
        else if(month==10)
            printf("31");
        
        // November
        else if(month==11)
            printf("30");
        
        // December
        else if(month==12)
            printf("31");
    }
  
    return 0;
}
