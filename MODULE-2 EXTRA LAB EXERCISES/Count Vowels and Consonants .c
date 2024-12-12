//Write a C program that takes a string from the user and counts the number of vowels and consonants in the string. 

#include <stdio.h>

void countVowelsAndConsonants(char str[], int *vowelCount, int *consonantCount) 
{
    *vowelCount = 0;
    *consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') 
		{ 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                (*vowelCount)++; 
            } else 
			{
                (*consonantCount)++; 
            }
        }
    }
}

main() 
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

}
