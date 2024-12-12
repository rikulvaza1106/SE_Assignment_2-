//Write a C program that takes a number as input and checks whether it is a palindrome using a function. 

#include <stdio.h>

int isPalindrome(int n) 
{
    int original = n; 
    int reversed = 0, remainder;

    while (n != 0) 
	{
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return (original == reversed);
}

main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
	{
        printf("%d is a palindrome.\n", num);
    } else 
	{
        printf("%d is not a palindrome.\n", num);
    }

}
