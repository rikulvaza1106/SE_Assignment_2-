//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function. 

#include <stdio.h>
main()
{
	int n, i, a=0, b=1, c;
	
	printf("\n\n\t Enter a number to print the fobonacci series : ");
	scanf("%d",&n);
	
	printf("\n\n\t %d  %d", a, b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d", c);
		a=b;
		b=c;
		i++;
	}
}