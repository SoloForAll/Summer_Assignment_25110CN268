// Program to check whether a matrix is symmetric or not

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int flag = 1;

    // Taking matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols)
    {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    // Taking matrix input
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking symmetry
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    // Displaying result
    if(flag)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not a Symmetric Matrix");
    }

    return 0;
}
