// Program to print character pyramid pattern

#include <stdio.h>
int main() {
    int i, j, rows, space;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing character pyramid
    for(i = 1; i <= rows; i++)
    {
        // Printing spaces
        for(space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        // Printing increasing characters
        for(j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        // Printing decreasing characters
        for(j = i - 1; j >= 1; j--)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
    return 0;
}
