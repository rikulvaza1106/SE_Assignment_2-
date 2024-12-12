//Write a C program that generates Pascal’s Triangle up to N rows using loops. 

#include <stdio.h>

long long factorial(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
	{
        result *= i;
    }
    return result;
}

long long binomialCoefficient(int n, int k) 
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void generatePascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{
        
        for (int j = 0; j < rows - i - 1; j++) 
		{
            printf("  ");
        }
        for (int j = 0; j <= i; j++) 
		{
            printf("%4lld ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

main() 
{
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    if (rows <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }

    generatePascalsTriangle(rows);

}
