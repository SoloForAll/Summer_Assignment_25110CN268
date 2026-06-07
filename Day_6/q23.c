// Program to count set bits in a number

#include <stdio.h>

int main() {
    int n, count = 0;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Counting set bits
    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    // Printing total set bits
    printf("Total set bits = %d", count);
    return 0;
}
