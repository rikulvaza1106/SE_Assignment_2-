//Write a C program that counts the number of words in a sentence entered by the user. 

#include <stdio.h>

int countWords(char str[]) 
{
    int count = 0;
    int inWord = 0; 

    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (isspace(str[i])) 
		{
            
            inWord = 0;
        } else if (!inWord) 
		{
            
            inWord = 1;
            count++;
        }
    }

    return count;
}

main() 
{
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    int wordCount = countWords(str);

    printf("Number of words: %d\n", wordCount);

}
