// Program to print reverse star pattern

#include <stdio.h>
int main() {
    int i, j, rows;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing reverse star pattern
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
