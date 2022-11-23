/*************************************************************************************/
/*                       Author: Karim Tarek Ibrahim                                */
/***********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // (dif)=> difference between selling and cost prices
    int cost_p, sell_p, dif;

    // Getting cost and selling prices from user
    printf("Input cost price: ");
    scanf("%d", &cost_p);
    printf("Input selling price: ");
    scanf("%d", &sell_p);

    if(cost_p>sell_p)
    {
        dif=cost_p-sell_p;
        printf("Loss: %d", dif);
    }
    else if(cost_p<sell_p)
    {
        dif=sell_p-cost_p;
        printf("Profit: %d", dif);
    }
    else
        printf("There's no profit or loss!");

    return 0;
}
