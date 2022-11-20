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

    // Checking if the given character is alphabet, digit or special character
    if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
        printf("%c is alphabet", ch);
    
    else if(ch>=48 && ch<=57)
        printf("%c is digit", ch);
    
    else
        printf("%c is special character", ch);

    return 0;
}
