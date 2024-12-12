//Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen()

#include <stdio.h>

main() 
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); 
    
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  

    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("\nThe concatenated string is: %s\n", str1);

    printf("The length of the concatenated string is: %zu\n", strlen(str1));

}
