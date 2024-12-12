// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include <stdio.h>
main() 
{
    int matrix[3][3];
    int sum = 0;

    printf("Enter 9 integers for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            sum += matrix[i][j];
        }
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

}
