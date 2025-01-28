#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;
    const int max_attempts = 10;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100. You have %d attempts to guess it.\n", max_attempts);

    while (attempts < max_attempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0; // Exit the program if the guess is correct
        }
    }

    // If the user runs out of attempts
    printf("Sorry, you've run out of attempts. The number was %d.\n", secret_number);

    return 0;
}