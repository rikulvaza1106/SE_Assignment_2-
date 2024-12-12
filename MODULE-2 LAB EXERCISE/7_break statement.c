//Write a C program that uses the break statement to stop printing numbers when it reaches 5. 

#include <stdio.h>
main() 
{
    
    printf("Using break statement:\n");
    for (int i = 0; i <= 10; i++) 
	{
        if (i == 5) 
		{
            break;  
        }
        printf("%d ", i);
    }
    printf("\n");

}
