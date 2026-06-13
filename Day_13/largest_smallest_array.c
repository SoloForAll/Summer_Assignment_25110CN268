// Program to find largest and smallest element in an array

#include <stdio.h>
int main() {
    int arr[100], n, i;
    int largest, smallest;
    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];
    // Finding largest and smallest element
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    // Displaying result
    printf("Largest Element = %d\n", largest);
    printf("Smallest Element = %d", smallest);
    return 0;
}
