// Program to find second largest element in an array

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;

    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = arr[0];

    // Finding largest and second largest
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest Element = %d", secondLargest);

    return 0;
}
