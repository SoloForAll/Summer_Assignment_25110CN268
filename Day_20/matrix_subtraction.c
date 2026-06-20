// Program to perform subtraction of two matrices

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int rows, cols, i, j;

    // Taking matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Taking first matrix input
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Taking second matrix input
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Displaying result
    printf("Subtraction Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
