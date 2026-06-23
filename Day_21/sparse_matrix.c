// Program to check whether a matrix is sparse or not

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int zeroCount = 0;

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

            if(matrix[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    // Checking sparse matrix condition
    if(zeroCount > (rows * cols) / 2)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not a Sparse Matrix");
    }

    return 0;
}
