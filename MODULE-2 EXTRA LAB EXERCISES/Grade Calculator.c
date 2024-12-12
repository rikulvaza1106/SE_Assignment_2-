/*Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
Marks > 90: Grade A 
 Marks > 75 and <= 90: Grade B 
 Marks > 50 and <= 75: Grade C 
 Marks <= 50: Grade D
*/
#include<stdio.h>
main() 
{
    int rollno;
    float sub1, sub2, sub3, total, per;
    char name[50];
    
    printf("\n--------Marksheet:--------\n");
     
    printf("\tEnter Roll Number: ");
    scanf("%d", &rollno);
    
    printf("    Enter Name of Student: ");
    scanf("%s", &name);
    
    printf("\nEnter marks for 3 subjects (out of 100):\n");
    
    printf("\t\tphysics  : ");
    scanf("%f", &sub1);
    
    printf("\t\tchemistry: ");
    scanf("%f", &sub2);
    
    printf("\t\tmaths    : ");
    scanf("%f", &sub3);
    
    total= sub1 + sub2 + sub3;
    printf("\n\n\t Sum = %f", total);
    
    per=total/3;
    printf("\n\n\t Percentage = %f", per);
    
    printf("\n\n\t Gared: ");
    if(per>=90)
    
    	printf("A\n");
    
	else if(per>=75)
	
	    printf("B\n");
		
	else if(per>=50)
	
	    printf("C\n");
		
	else if(per<=50)
	
	    printf("D\n");
		
	
    
}