// Program to create a number guessing game

#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;

    // Taking user's guess
    printf("Guess a number between 1 and 50: ");
    scanf("%d", &guess);

    // Checking the guess
    if(guess == secret)
    {
        printf("Congratulations! You guessed the correct number.");
    }
    else if(guess < secret)
    {
        printf("Too Low!");
    }
    else
    {
        printf("Too High!");
    }

    return 0;
}
