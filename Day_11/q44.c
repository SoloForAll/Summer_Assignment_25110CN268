// Program to find factorial of a number using function

#include <stdio.h>

// Function to calculate factorial
long long int factorial(int n)
{
    int i;
    long long int fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function and displaying result
    printf("Factorial = %lld", factorial(num));

    return 0;
}
