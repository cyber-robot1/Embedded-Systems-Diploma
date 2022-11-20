/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned char x;

    // Getting a character from user
    printf("Input character: ");
    scanf("%c", &x);

    // Checking if the given character is an alphabet or not
    if((x>=97 && x<=122) || (x>=65 && x<=90))
        printf("Character is an ALPHABET");
    else
        printf("Character is not an ALPHABET");

    return 0;
}
