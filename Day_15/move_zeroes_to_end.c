// Program to move all zeroes to the end of an array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j = 0, temp;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Moving non-zero elements to front
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    // Displaying updated array
    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
