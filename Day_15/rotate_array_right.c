// Program to rotate array right by one position

#include <stdio.h>

int main()
{
    int arr[100], n, i, last;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Storing last element
    last = arr[n - 1];

    // Right rotation
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    // Displaying rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
