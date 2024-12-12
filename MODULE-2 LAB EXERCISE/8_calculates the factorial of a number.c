//Write a C program that calculates the factorial of a number using a function Include function declaration, definition, and call.

#include <stdio.h>

long long factorial(int n);
main() 
{
    int num;
    long long result;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    
    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{
       
        result = factorial(num);

        printf("The factorial of %d is: %lld\n", num, result);
    }

}


long long factorial(int n) 
{
    long long fact = 1;
    for (int i = 1; i <= n; i++) 
	{
        fact *= i;  
    }
    return fact;
}
