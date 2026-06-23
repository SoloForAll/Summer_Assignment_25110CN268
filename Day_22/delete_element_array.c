// Program to delete an element from an array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int position;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Taking position to delete
    printf("Enter position to delete: ");
    scanf("%d", &position);

    // Shifting elements to left
    for(i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Displaying updated array
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
