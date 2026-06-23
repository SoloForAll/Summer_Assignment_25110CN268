// Program to perform binary search in an array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int key, low, high, mid;
    int found = 0;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking sorted array input
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Taking element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search logic
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Displaying result
    if(found)
    {
        printf("Element found at position %d", mid + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
