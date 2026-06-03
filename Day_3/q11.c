// Program to find GCD of two numbers

#include <stdio.h>

int main() {
    int a, b, i, gcd;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Finding common divisors
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    // Printing GCD
    printf("GCD = %d", gcd);
    return 0;
}
