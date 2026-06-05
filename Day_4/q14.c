// Program to find nth Fibonacci term

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;
    // Taking input from user
    printf("Enter term number: ");
    scanf("%d", &n);
    // Finding nth term
    for(i = 1; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    // Printing result
    printf("Nth Fibonacci term = %d", first);
    return 0;
}
