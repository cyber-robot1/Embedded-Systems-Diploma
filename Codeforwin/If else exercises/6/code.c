/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;

    // Getting year from user
    printf("Input year: ");
    scanf("%d", &year);

    // Checking if the year is leap or not
    if((year % 4 == 0) && (year % 100 != 0))
        printf("%d is leap year.", year);
    else
        printf("%d is not leap year.", year);


    return 0;
}
