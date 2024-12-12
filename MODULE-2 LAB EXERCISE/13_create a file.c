/* Write a C program to create a file, write a string into it, close the file, then open the file again to read and display 
its contents. */

#include <stdio.h>

main() 
{
    FILE *file;
    char filename[100] = "example.txt";
    char inputString[100];
    char outputString[100];

    file = fopen(filename, "w"); 
    if (file == NULL) 
	{
        printf("Error: Unable to create or open the file.\n");
        exit(1); 
    }

    printf("Enter a string to write into the file: ");
    fgets(inputString, sizeof(inputString), stdin);

    fputs(inputString, file);
    fclose(file); 
    printf("String written to the file successfully.\n");

    file = fopen(filename, "r"); 
    if (file == NULL) 
	{
        printf("Error: Unable to open the file for reading.\n");
        exit(1); 
    }

    printf("\nContents of the file:\n");
    while (fgets(outputString, sizeof(outputString), file) != NULL) 
	{
        printf("%s", outputString); 
    }
    fclose(file); 

}
