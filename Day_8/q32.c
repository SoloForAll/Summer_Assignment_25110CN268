// Program to print repeated number pattern

#include <stdio.h>
int main() {
    int i, j, rows;
    // Taking input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Printing repeated number pattern
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
