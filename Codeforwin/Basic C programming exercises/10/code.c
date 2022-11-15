/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int day, week, year, d;

    // Getting days input from user
    printf("Enter days: ");
    scanf("%d", &day);
    d = day;

    // Getting number of years in the input
    year = day/365;

    day = day - (year*365);

    // Getting number of weeks in the input
    week = day/7;

    day = day - (week*7);

    // Printing the output
    printf("%d days = %d year/s, %d week/s and %d day/s", d, year, week, day);

    return 0;
}
