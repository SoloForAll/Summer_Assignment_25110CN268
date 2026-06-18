// Program to sort an array in descending order

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Displaying sorted array
    printf("Array in Descending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
