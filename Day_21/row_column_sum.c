// Program to find row-wise and column-wise sum of a matrix

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int sum;

    // Taking matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Taking matrix input
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Row-wise sum
    printf("Row-wise Sum:\n");
    for(i = 0; i < rows; i++)
    {
        sum = 0;

        for(j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    // Column-wise sum
    printf("Column-wise Sum:\n");
    for(j = 0; j < cols; j++)
    {
        sum = 0;

        for(i = 0; i < rows; i++)
        {
            sum = sum + matrix[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}
