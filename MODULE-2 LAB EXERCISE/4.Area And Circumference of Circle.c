//WAP to Find Area And Circumference of Circle

#include<stdio.h>
main()
{
	//Area Circle : Pi*r*r
	float pi=3.14, area, Circumference;
	int r=5;
	
	printf("\n\n\t Pi = %.2f", pi);
	printf("\n\n\t Radious = %d", r);
	
	//Circumeference of Circle : 2*pi*r
	
	area=pi*r*r;
	printf("\n\n\t Area of Circle  = %.2f", area);
	
	printf("\n\n\t Circmeference of Circle = %.2f", 2*pi*r);
}