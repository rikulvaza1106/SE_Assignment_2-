/*Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of 
structures to store details of 3 students and print them.*/

#include <stdio.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

main() 
{
    struct Student students[3]; 
    printf("Enter details of 3 students:\n");
    for (int i = 0; i < 3; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\nDetails of Students:\n");
    for (int i = 0; i < 3; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

}
