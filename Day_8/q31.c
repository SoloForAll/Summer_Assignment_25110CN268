// Program to print character triangle pattern

#include <stdio.h>
int main() {
    int i, j, rows;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing character triangle
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }
    return 0;
}
