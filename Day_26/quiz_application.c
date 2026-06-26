// Program to create a simple quiz application

#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    // Question 1
    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Question 2
    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Displaying score
    printf("\nYour Score = %d/2", score);

    return 0;
}
