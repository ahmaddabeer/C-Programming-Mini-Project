#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;       // Variables to store the random number and user guess
    int no_of_guesses = 0;   // Counter for the number of guesses made by the user

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Display welcome message
    printf("Welcome to the world of Guessing Numbers!\n");

    // Generate a random number between 1 and 100
    random = rand() % 100 + 1;

    // Loop until the user guesses the correct number
    do
    {
        printf("\nEnter your guess (choose a number between 1 and 100): "); // Prompt the user
        scanf("%d", &guess);  // Take input from the user

        no_of_guesses++;  // Increment the guess counter

        // Check if the guess is too low
        if (guess < random)
        {
            printf(">> Guess a larger number.\n");
        }
        // Check if the guess is too high
        else if (guess > random)
        {
            printf(">> Guess a smaller number.\n");
        }
        // If the guess is correct, congratulate the user
        else
        {
            printf(">> Congratulations!!! You have successfully guessed the number in %d attempts.\n", no_of_guesses);
        }

    } while (guess != random); // Continue looping until the guess is correct

    // Display goodbye message
    printf("\nThank you for playing!");
    printf("\nDeveloped by: Dabeer Ahmad\n");

    return 0; // Indicate successful program termination
}
