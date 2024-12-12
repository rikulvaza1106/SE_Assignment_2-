/*Write a C program that takes N numbers from the user and stores them in an array. The program should then calculate and 
display the sum of all array elements. */

#include <stdio.h>
main() 
{
    int N, i;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("\nEnter %d numbers: \n", N);
    for (i = 0; i < N; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < N; i++) 
	{
        sum += arr[i];
    }

    printf("\n The sum of all the numbers is: %d \n", sum);

}
