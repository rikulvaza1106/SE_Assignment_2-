//wap to number is even or odd using an if-else statement. a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.).

#include <stdio.h>  
main() 
{
    
    int number, month;

    // Part 1: Check if a number is even or odd
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
	{
        printf("%d is an even number.\n", number);
    } else 
	{
        printf("%d is an odd number.\n", number);
    }

    // Part 2: Display month name based on user input
    printf("\nEnter a number (1-12) to get the month name: ");
    scanf("%d", &month);

    switch (month) 
	{
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

}
