//Accept number from user store in array

#include <stdio.h>
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

    printf("\nThe entered numbers are: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
