//Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 

#include <stdio.h>  
main() 
{
    
    int students, apples_per_student = 5, total_apples;

    printf("Enter the number of students: ");
    scanf("%d", &students);
    
    printf(" apples to each of the students :5");
    scanf("5", &apples_per_student);


    total_apples = students * apples_per_student;

    printf("\n\n\t total_apples = %d", total_apples);

}
