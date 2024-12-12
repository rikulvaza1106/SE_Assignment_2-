//Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>

main() 
{
    int num = 10;        
    int *ptr = &num;     

    
    printf("Initial value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);

    *ptr = 25;

    printf("\nAfter modification:\n");
    printf("Value of num: %d\n", num);
    printf("Value accessed through pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", (void *)ptr);

}
