/*Write a C program that acts as a simple calculator. The program should take two numbers and an operator as input from the user 
and perform the respective operation (addition, subtraction, multiplication, division, or modulus) using operators.*/

#include<stdio.h>
main()
{
	int a, b, c; 
	
	a=30; 
	b=15;
	
	printf("\n\n\t  a = %d  b = %d", a, b);
	printf("\n\n\t Addition = %d", a+b);
	c=a+b;
	printf("\n\n\t Sum = %d", c);
	
	printf("\n\n\t subtraction = %d", a-b);
	c=a-b;
	printf("\n\n\t sub = %d", c);
	
	printf("\n\n\t multiplication = %d", a*b);
	c=a*b;
	printf("\n\n\t multiplication = %d", c);
	
	printf("\n\n\t division = %d", a/b);
	c=a/b;
	printf("\n\n\t division = %d", c);
	
	printf("\n\n\t modul = %d", a%b);
	c=a%b;
	printf("\n\n\t modul = %d", c);
}