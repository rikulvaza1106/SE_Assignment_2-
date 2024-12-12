//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>
main() 
{
    int number, reversed_number = 0, remainder;

    printf("Enter a number :");
    scanf("%d", &number);

    while (number != 0) 
	{
        remainder = number % 10;  
        reversed_number = reversed_number * 10 + remainder;  
        number /= 10;  
    }

    printf("Reversed number: %d\n", reversed_number);

}
