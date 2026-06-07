// Program to find factorial using recursion

#include <stdio.h>

// Recursive function for factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Printing factorial
    printf("Factorial = %d", factorial(n));

    return 0;
}
