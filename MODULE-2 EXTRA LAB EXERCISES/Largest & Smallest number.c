/*Write a C program that takes three numbers from the user and determines: 
 The largest number.  
 The smallest number. 
*/

#include <stdio.h>

main() 
{
    int num1, num2, num3; 
    int largest, smallest; 

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) 
	{
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) 
	{
        largest = num2;
    } else 
	{
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) 
	{
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) 
	{
        smallest = num2;
    } else 
	{
        smallest = num3;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

}
 