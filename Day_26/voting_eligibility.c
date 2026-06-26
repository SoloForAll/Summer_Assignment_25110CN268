// Program to check voting eligibility

#include <stdio.h>

int main()
{
    int age;

    // Taking age as input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking eligibility
    if(age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}
