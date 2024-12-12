// Modify the program to skip printing the number 3 using the continue statement. 

#include <stdio.h>
main() 
{
    
    printf("Using continue statement:\n");
    for (int i = 1; i <= 10; i++) 
	{
        if (i == 3) 
		{
            continue;  
        }
        printf("%d ", i);
    }
    printf("\n");

}
