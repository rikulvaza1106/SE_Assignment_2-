//Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3). 

#include<stdio.h>
main()
{
	int num, n, sum=0, rem;
	
	printf("\n\n\t Input a number : ");
	scanf("%d",&num);
	
	n=num;
	
	while(num>0)
	{
		rem=num%10; //5
		sum=sum+(rem*rem*rem);
		num=num/10; //15
	}
	
	if(sum==n)
		printf("\n\n\t Number is Armstrong...");
	else
		printf("\n\n\t Number is not Armstrong...");
}