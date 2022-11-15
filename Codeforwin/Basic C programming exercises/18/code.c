/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float principle, time, rate, CI;

    // Getting principle, time and rate from user
    printf("Enter principle (amount): ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);

    // Getting compound interest
    float flag1 = 1 + (rate/100);
    float flag2 = pow(flag1, time);
    CI = principle * flag2;                     // (CI)=> Compound Interest

    // Printing compound interest
    printf("Compound Interest = %f", CI);

    return 0;
}
