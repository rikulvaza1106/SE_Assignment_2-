/*Write a C program that implements a simple number guessing game. The program should generate a random number 
between 1 and 100, and the user should guess the number within a limited number of attempts. */

#include <stdio.h>

#define MAX_ATTEMPTS 10

main() 
{
    int target, guess, attempts = 0;

    srand(time(NULL));

    target = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");
    printf("You have %d attempts.\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS) 
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == target) 
		{
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < target) 
		{
            printf("Too low! Try again.\n");
        } else 
		{
            printf("Too high! Try again.\n");
        }

        printf("Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
    }

    if (attempts == MAX_ATTEMPTS && guess != target) 
	{
        printf("Sorry, you've used all your attempts. The number was %d.\n", target);
    }

}
