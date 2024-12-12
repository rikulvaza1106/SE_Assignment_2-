//Find max element from the array

#include <stdio.h>

findMax(int arr[], int n) 
{
    int max = arr[0];  

    
    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];  
        }
    }

    return max;
}

main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxElement = findMax(arr, n);

    printf("\nThe maximum element in the array is: %d\n", maxElement);
}
