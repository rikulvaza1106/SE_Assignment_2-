//Convert array into asce and dec order
#include <stdio.h>

void bubbleSortAscending(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) 
	{
        for (int j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) 
	{
        for (int j = 0; j < n-i-1; j++) 
		{
            if (arr[j] < arr[j+1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    bubbleSortAscending(arr, n);
    printf("\nArray in Ascending Order: ");
    printArray(arr, n);

    bubbleSortDescending(arr, n);
    printf("\nArray in Descending Order: ");
    printArray(arr, n);
}
