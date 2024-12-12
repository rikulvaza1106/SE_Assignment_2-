//Find Area of Square formula = a2, Find Area of Cube formula : a = 6a2, Find area of Triangle Formula : A = 1/2 × b × h 

#include<stdio.h>
main()
{
	//Area square :a*a
	int a=5, area;
	
	printf("\n\n\t length of square = %d", a);
	
	area=a*a;
	printf("\n\n\t Area of square  = %d", area);
	
	//Area cube :6*a*a
	
	printf("\n\n\t length of cube = %d", a);
	
	
	area=6*a*a;
	printf("\n\n\t Area of cube  = %d", area);
	
	//Area triangle : b*h/2
	int b=15, Area;
	int h=6;
	
	printf("\n\n\t base of triangle = %d", b);
	printf("\n\n\t height of triangle = %d", h);
	

	
	Area=b*h/2;
	printf("\n\n\t Area of triangle  = %d", area);
}