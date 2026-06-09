// Program to print star pyramid pattern

#include <stdio.h>
int main() {
    int i, j, rows, space;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing star pyramid
    for(i = 1; i <= rows; i++) {
        // Printing spaces
        for(space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        // Printing stars
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
