// Program to check whether a number is Armstrong or not

#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    // Calculating sum of cubes of digits
    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }
    // Checking Armstrong condition
    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
