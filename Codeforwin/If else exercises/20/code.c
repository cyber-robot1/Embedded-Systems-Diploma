/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int basic_salary, gross_salary, da, hra;

    // Getting basic salary from user
    printf("Input basic salary of an employee: ");
    scanf("%d", &basic_salary);

    if(basic_salary<=10000)
    {
        da = 0.8 * basic_salary;
        hra = 0.2 * basic_salary;
    }

    else if(basic_salary>=20001)
    {
        da = 0.95 * basic_salary;
        hra = 0.3 * basic_salary;
    }

    // Calculating gross salary
    gross_salary = da + hra + basic_salary;

    // Printing gross salary
    printf("Gross salary = %d", gross_salary);

    return 0;
}
