//Write a C program that takes a string as input and reverses it using a function. 

#include <stdio.h>

void reverseString(char str[]) 
{
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;

    while (start < end) 
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

}
