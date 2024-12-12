//Join 2 strings using of user defined function without using inbuilt function 

#include <stdio.h>

void stringConcat(char str1[], char str2[]) 
{
    int i = 0, j = 0;
    
    while (str1[i] != '\0') 
	{
        i++;
    }

    while (str2[j] != '\0') 
	{
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

main() 
{
    char str1[200], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  
    str1[strcspn(str1, "\n")] = '\0';  

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  
    str2[strcspn(str2, "\n")] = '\0';  

    stringConcat(str1, str2);

    printf("\nThe concatenated string is: %s\n", str1);

}
