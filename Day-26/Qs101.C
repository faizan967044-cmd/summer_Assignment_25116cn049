#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(0));           // Seed for random number
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
            printf("Too high! Try again.\n");
        else if (guess < number)
            printf("Too low! Try again.\n");
        else
            printf("Congratulations! You guessed the number.\n");

    } while (guess != number);

    printf("Number of attempts: %d\n", attempts);

    return 0;
}