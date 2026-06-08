// Program to reverse a number using recursion

#include <stdio.h>
int reverse = 0;
// Recursive function to reverse number
void reverseNumber(int n) {
    if(n == 0)
    {
        return;
    }
    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10);
}
int main() {
    int n;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Calling recursive function
    reverseNumber(n);
    // Printing reversed number
    printf("Reversed number = %d", reverse);
    return 0;
}
