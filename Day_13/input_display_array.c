// Program to input and display array elements

#include <stdio.h>
int main() {
    int arr[100], n, i;
    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Displaying array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
