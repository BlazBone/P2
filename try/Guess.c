#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 5;
    int numberOfGuesses = 0;
    int userGuess;

    while (userGuess != number && numberOfGuesses < 5)
    {
         printf("Guess a number: ");
         scanf("%d", &userGuess);
        numberOfGuesses++;
         if (userGuess != number){
             printf("You guessed worng!\n Try again\n");
         } else {
             printf("You win!");
             break;
         }
    }
    
   

    return 0;
}