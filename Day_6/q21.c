// Program to convert decimal number to binary

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;
    // Taking input from user
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    // Converting decimal to binary
    while(n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary number = ");
    // Printing binary number in reverse order
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    return 0;
}
