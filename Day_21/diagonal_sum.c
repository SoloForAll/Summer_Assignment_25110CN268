// Program to find sum of diagonal elements of a matrix

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int sum = 0;

    // Taking matrix size
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    // Taking matrix input
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating diagonal sum
    for(i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    // Displaying result
    printf("Sum of Diagonal Elements = %d", sum);

    return 0;
}
