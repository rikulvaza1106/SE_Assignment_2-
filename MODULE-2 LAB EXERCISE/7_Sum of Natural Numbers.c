//Calculate the Sum of Natural Numbers Using the While Loop 

#include <stdio.h>
main() 
{
    int n, i = 1, sum = 0;

    printf("Enter the number of natural numbers to sum : ");
    scanf("%d", &n);

    while (i <= n) 
	{
        sum += i;  
        i++;       
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

}
