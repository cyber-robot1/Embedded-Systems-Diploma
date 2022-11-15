/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float physics, chemistry, biology, math, french;
    float total, average, percentage;

    // Getting marks of 5 subjects of a student from user
    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f", &physics, &chemistry, &biology, &math, &french);

    // Getting total of the subjects
    total = physics + chemistry + biology + math + french;

    // Getting average of the subjects
    average = total / 5;

    // Getting percentage of the subjects
    percentage = (total / 500) * 100;

    // Printing total of the subjects
    printf("Total = %.1f\n", total);

    // Printing average of the subjects
    printf("Average = %.1f\n", average);

    // Printing percentage of the subjects
    printf("Percentage = %.1f", percentage);

    return 0;
}
