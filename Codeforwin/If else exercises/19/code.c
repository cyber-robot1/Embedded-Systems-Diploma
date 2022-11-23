/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Subjects of the student
    int physics, chemistry, computer, biology, math;
    int sum;

    // Percentage the student has in the 5 subjects
    float percent;

    // Getting marks of five subjects from the user student
    printf("Input marks of five subjects: ");
    scanf("%d%d%d%d%d", &physics, &chemistry, &computer, &biology, &math);

    sum=physics+chemistry+computer+biology+math;
    percent=((double)sum/(double)500)*100;             // Type Casting to avoid Integer Division

    printf("%.2f\n", percent);

    if(percent>=90)
        printf("Grade A");
    else if(percent>=80)
        printf("Grade B");
    else if(percent>=70)
        printf("Grade C");
    else if(percent>=60)
        printf("Grade D");
    else if(percent>=40)
        printf("Grade E");
    else if(percent<40)
        printf("Grade F");

    return 0;
}
