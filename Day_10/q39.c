// Program to print number pyramid pattern

#include <stdio.h>
int main() {
    int i, j, rows, space;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing number pyramid
    for(i = 1; i <= rows; i++) {
        // Printing spaces
        for(space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        // Printing increasing numbers
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        // Printing decreasing numbers
        for(j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
