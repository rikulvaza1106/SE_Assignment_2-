//WAP to reverse a string and check that the string is palindrome or no 

#include <stdio.h>

void reverseString(char str[], char reversed[]);
int isPalindrome(char str[], char reversed[]);
main() 
{
    char str[100], reversed[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, reversed);
    
    printf("Reversed string: %s\n", reversed);

    if (isPalindrome(str, reversed))
	{
        printf("The string is a palindrome.\n");
    } else
	{
        printf("The string is not a palindrome.\n");
    }

}

void reverseString(char str[], char reversed[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
	{
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';  
}

int isPalindrome(char str[], char reversed[]) 
{
    return strcmp(str, reversed) == 0;  
}
