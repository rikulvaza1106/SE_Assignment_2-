//Write a C program that calculates the factorial of a given number using a function. 

#include <stdio.h>

long long factorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        return 1; 
    }
    return n * factorial(n - 1); 
}

main() 
{
    int num;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{
        
        result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

}
