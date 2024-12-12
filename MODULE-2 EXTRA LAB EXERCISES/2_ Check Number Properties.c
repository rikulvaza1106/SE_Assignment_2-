/*Write a C program that takes an integer from the user and checks the following using different operators: 
 Whether the number is even or odd. 
 Whether the number is positive, negative, or zero. 
 Whether the number is a multiple of both 3 and 5. 
*/

#include <stdio.h>
main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
	{
        printf("The number is even.\n");
    } else 
	{
        printf("The number is odd.\n");
    }

    if (number > 0) 
	{
        printf("The number is positive.\n");
    } else if (number < 0) 
	{
        printf("The number is negative.\n");
    } else 
	{
        printf("The number is zero.\n");
    }

   
    if (number % 3 == 0 && number % 5 == 0) 
	{
        printf("The number is a multiple of both 3 and 5.\n");
    } else 
	{
        printf("The number is not a multiple of both 3 and 5.\n");
    }

}
