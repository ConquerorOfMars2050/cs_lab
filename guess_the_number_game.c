/*
Author: Asad Rzayev
Purpose: Create a "Guess the Number" C program
Date: 14/12/2024
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    int guessedNumber;
 
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
 
    for(int numberOfGuesses = 5; numberOfGuesses > 0; numberOfGuesses--)
    {
        printf("You have %d tr%s left\n", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d", &guessedNumber);
 
        if(guessedNumber < 0 || guessedNumber > 20)
        {
            printf("The entered number is not valid.\n");
        }
 
        else if(guessedNumber == randomNumber)
        {
            printf("Congratulations. You guessed it!");
            break;
        }
        else if(guessedNumber > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n", guessedNumber);
        }
 
        else if(guessedNumber < randomNumber)
        {
            printf("Sorry, %d is wrong. My number is more than that.\n", guessedNumber);
        }
    }
 
    return 0;
}
