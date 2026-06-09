// Program to print reverse number triangle

#include <stdio.h>

int main() {
    int i, j, rows;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing reverse number triangle
    for(i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
