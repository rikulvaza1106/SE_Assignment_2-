//WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>
main() 
{
    int num1, num2, num3, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    max = (num1 > num2) ? 
          ((num1 > num3) ? num1 : num3) :
          ((num2 > num3) ? num2 : num3);

    
    printf("The maximum number is: %d\n", max);

}
