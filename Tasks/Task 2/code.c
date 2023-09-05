  /* ********************************************************************************* */
 /*                       Author: Karim Tarek Ibrahim                                 */
/* ********************************************************************************* */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int x;
    printf("Enter your mark: ");
    scanf("%d", &x);
    
    if(x>=0 && x<50)
        printf("F");
	
    else if(x>=50 && x<60)
        printf("D");
	
    else if(x>=60 && x<70)
        printf("C");
	
    else if(x>=70 && x<80)
        printf("B");
	
    else if(x>=80 && x<100)
        printf("A");

    return 0;
}
