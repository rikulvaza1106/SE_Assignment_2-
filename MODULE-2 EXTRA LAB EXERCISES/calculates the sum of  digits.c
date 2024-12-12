//Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop

#include <stdio.h>
main() 
{
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        num = -num;
    }

    while (num > 0) 
	{
        digit = num % 10;  
        sum += digit;      
        num /= 10;        
    }

    printf("Sum of the digits: %d\n", sum);

}
