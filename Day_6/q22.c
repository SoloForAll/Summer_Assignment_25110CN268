// Program to convert binary number to decimal

#include <stdio.h>
#include <math.h>

int main() {
    int binary, remainder, decimal = 0, i = 0;
    // Taking input from user
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    // Converting binary to decimal
    while(binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);

        binary = binary / 10;
        i++;
    }
    // Printing decimal number
    printf("Decimal number = %d", decimal);
    return 0;
}
