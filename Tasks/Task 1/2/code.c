/**********************************/
/* Author: Karim Tarek Ibrahim   */
/********************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int score;                // (score)=> score that the student had in a specific exam.
    scanf("%d", &score);

    // range of the student's score
    if (score>=0 && score<50)
        printf("F");

    else if(score>=50 && score<60)
        printf("D");

    else if(score>=60 && score<70)
        printf("C");

    else if(score>=70 && score<80)
        printf("B");

    else if(score>=80 && score<=100)
        printf("A");


    return 0;
}
