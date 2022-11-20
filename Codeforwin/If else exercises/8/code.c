/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (ch)=> is a letter character
    unsigned char ch;

    // Getting a letter character from user
    printf("Input character: ");
    scanf("%c", &ch);

    // Checking if the letter is vowel or constant
    if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || ch==65 || ch==69 || ch==73 || ch==79 || ch==85)
        printf("%c is vowel", ch);
    
    else if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
        printf("%c is constant", ch);
        
    else
        printf("It's not an alphabet!");

    return 0;
}
