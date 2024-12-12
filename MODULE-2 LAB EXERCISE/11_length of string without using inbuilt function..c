//Find length of string which is entered by user without using inbuilt function.

#include <stdio.h>
main()
{
	char str1[20];
	int i, len=0;
	
	printf("\n\n\t Enter a string : ");
	//scanf("%s",&str1);
	gets(str1);

	for(i=0;str1[i]!='\0';i++)
	{
		printf("\n\n\t %c", str1[i]);
		len++;
	}
	
	printf("\n\n\t Length of the string : %d", len);	
}
