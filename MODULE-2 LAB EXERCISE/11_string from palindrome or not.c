//Accept string from user and check it is palindrome or not

#include <stdio.h>

isPalindrome(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) 
	{
        if (!isalnum(str[start])) 
		{
            start++;
        } else if (!isalnum(str[end])) 
		{
            end--;
        } else 
		{
            if (tolower(str[start]) != tolower(str[end])) 
			{
                return 0;  
            }
            start++;
            end--;
        }
    }

    return 1;  
}

main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) 
	{
        printf("The string is a palindrome.\n");
    } else 
	{
        printf("The string is not a palindrome.\n");
    }
}
