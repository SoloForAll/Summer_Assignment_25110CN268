// Program to rotate array left by one position

#include <stdio.h>

int main()
{
    int arr[100], n, i, first;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Storing first element
    first = arr[0];

    // Left rotation
    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    // Displaying rotated array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
