//WAP to take 10 no. Input from user find out below values a. How many Even numbers are there b. How many odd numbers are there c. Sum of even numbers d. Sum of odd numbers?

#include <stdio.h>
main() 
{
    int numbers[10];  
    int even_count = 0, odd_count = 0;  
    int even_sum = 0, odd_sum = 0; 

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) 
	{
        if (numbers[i] % 2 == 0) 
		{  
            even_count++;
            even_sum += numbers[i];
        } else 
		{  
            odd_count++;
            odd_sum += numbers[i];
        }
    }

    printf("\nResults:\n");
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

}
