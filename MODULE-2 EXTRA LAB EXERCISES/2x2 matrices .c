//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.

#include <stdio.h>
main() 
{
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j;

    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The resultant matrix is:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++)
		{
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}
