//Write a C program that takes an integer input from the user and prints its multiplication table using a for loop. 

#include <stdio.h>
main() 
{
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

}
