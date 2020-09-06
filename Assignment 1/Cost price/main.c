#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Sell,profit,Cost;

    printf("Enter the total selling price of 15 items:");
    scanf("%f",& Sell);

    printf("Enter the total profit of 15 items:");
    scanf("%f",&profit);

    Cost=((Sell-profit)/15);
    printf("The cost of one item is %.2f",Cost);

    return 0;
}
