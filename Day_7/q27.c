// Program to find sum of digits using recursion

#include <stdio.h>
// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if(n == 0)
    {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int n;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Printing sum of digits
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
