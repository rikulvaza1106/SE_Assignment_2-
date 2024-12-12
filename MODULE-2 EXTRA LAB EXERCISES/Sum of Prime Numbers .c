//Description: Write a C program that calculates the sum of all prime numbers up to a given number N. 

#include <stdio.h>

int isPrime(int num) 
{
    if (num <= 1) 
	{
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		{
            return 0; 
        }
    }
    return 1;
}

int sumOfPrimes(int n) 
{
    int sum = 0;
    for (int i = 2; i <= n; i++) 
	{
        if (isPrime(i)) 
		{
            sum += i;
        }
    }
    return sum;
}

main() 
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 2) 
	{
        printf("There are no prime numbers less than 2.\n");
    } else 
	{
        int result = sumOfPrimes(n);
        printf("The sum of all prime numbers up to %d is: %d\n", n, result);
    }
}
