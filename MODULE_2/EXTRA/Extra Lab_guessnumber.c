/* Write a C program that implements a simple number guessing game. The program should generate 
a random number between 1 and 100, and the user should guess the number within a limited number of attempts.
Challenge: Provide hints to the user if the guessed number is too high or too low.*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	
    int randomNumber, guess, attempt, maxAttempts, choice; 
    
    // Intitialize the random number generator
    srand(time(0));
    randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    //Choose difficulty level
    printf("Welcome to the Number Guessing Game!\n");
    printf("Choose difficulty level:\n");
    printf("1. Beginner Level\n");
    printf("2. Intermediate Level\n");
    printf("3. Pro Level\n");
    
    printf("Enter your choice (1,2,3): ");
    scanf("%d", &choice);

    // Set number of attempts based on choice
    switch (choice) {
        case 1:
            maxAttempts = 7;
            printf("\nYou selected Beginner mode. You have 7 chances.\n");
            break;
        case 2:
            maxAttempts = 5;
            printf("\nYou selected Intermediate mode. You have 5 chances.\n");
            break;
        case 3:
            maxAttempts = 3;
            printf("\nYou selected Pro mode. You have 3 chances.\n\n");
            break;
        default:
            printf("\nInvalid choice. Beginner mode selected.\n\n");
            maxAttempts = 7;
    }

    // Guessing loop
    for (attempt = 1; attempt <= maxAttempts; attempt++) {
        printf("Attempt %d of %d: Enter your guess: ", attempt, maxAttempts);
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the number in %d attempt.\n", attempt);
            return 0;
        } else if (guess < randomNumber) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }
    printf("You've used all your attempts. The number was: %d\n", randomNumber);
    
}

