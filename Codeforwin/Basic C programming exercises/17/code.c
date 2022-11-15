/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    float principle, time, rate, SI;

    // Getting principle, time and rate from user
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);

    // Getting simple interest
    SI = (principle*time*rate)/100;    //(SI)=> Simple Interest

    // Printing simple interest
    printf("Simple Interest = %f", SI);


    return 0;
}
