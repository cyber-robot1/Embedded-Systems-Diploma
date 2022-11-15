/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{


    int x, y;

    /*
       (sum)=> sum of two numbers
       (dif)=> difference between two numbers
       (prod)=> product of two numbers
       (mod)=> modulus of two numbers
       (quot)=> quotient of two numbers
    */
    
    int sum, dif, prod, mod;
    float quot;


    // Getting two numbers from user
    printf("First number: ");
    scanf("%d", &x);
    printf("Second number: ");
    scanf("%d", &y);

    // Getting Sum of two numbers
    sum = x+y;

    // Getting Difference of two numbers
    dif = x-y;

    // Getting Product of two numbers
    prod = x*y;

    // Getting Quotient of two numbers
    if(y==0)
    {
        printf("Math Error\n");      // Dividing by zero is undefined mathematical operation
    }
    else
    {
        quot = (float)x/(float)y;            // Type Casting to avoid Integer Division
    }

    // Getting Modulus of two numbers
    mod = x%y;

    // Printing Sum of two numbers
    printf("Sum = %d\n", sum);

    //Printing Difference between two numbers
    printf("Difference = %d\n", dif);

    // Printing Product of two numbers
    printf("Product = %d\n", prod);

    // Printing Quotient of two numbers
    printf("Quotient = %f\n", quot);

    // Printing Modulus of two numbers
    printf("Modulus = %d", mod);



    return 0;
}
