/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (ch)=> is a letter character
    unsigned char ch;

    // Getting a character character from user
    printf("Input character: ");
    scanf("%c", &ch);

    // Checking if the given character is uppercase or lowercase alphabet
    if(ch>=97 && ch<=122)
        printf("%c is Lowercase alphabet", ch);

    else if(ch>=65 && ch<=90)
        printf("%c is Uppercase alphabet", ch);

    else
        printf("%c is a special character!", ch);

    return 0;
}
