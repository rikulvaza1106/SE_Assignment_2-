//Write a C program that stores 5 integers in a one-dimensional array and prints them. 

#include <stdio.h>
main() 
{
    int arr[5];
    
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    printf("The entered integers are: ");
    for (int i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

}
