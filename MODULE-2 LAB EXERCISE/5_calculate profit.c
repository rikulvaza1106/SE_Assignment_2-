//Write a C program to calculate profit and loss on a transaction

#include <stdio.h>
main() 
{
    
    float cost_price, selling_price, result;


    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);


    if (selling_price > cost_price) 
	{
        result = selling_price - cost_price;
        printf("You made a profit of %.2f.\n", result);
    } else if (selling_price < cost_price) 
	{
        result = cost_price - selling_price;
        printf("You incurred a loss of %.2f.\n", result);
    } else 
	{
        printf("No profit, no loss.\n");
    }

}
