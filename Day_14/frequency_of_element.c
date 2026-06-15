// Program to find frequency of an element in an array

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, count = 0;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Taking element whose frequency is to be found
    printf("Enter element: ");
    scanf("%d", &key);

    // Counting frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency = %d", count);

    return 0;
}
