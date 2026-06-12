// Program to find Fibonacci series using function

#include <stdio.h>
// Function to return Fibonacci term
int fibonacci(int n) {
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n, i;
    // Taking input from user
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    // Printing Fibonacci series
    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
