// Program to find sum and average of array elements
#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;
    float average;
    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    // Calculating average
    average = (float)sum / n;
    // Displaying result
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);
    return 0;
}
