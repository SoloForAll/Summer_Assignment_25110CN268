// Program to count even and odd elements in an array

#include <stdio.h>
int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;
    // Taking size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Taking array input
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Counting even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // Displaying result
    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d", odd);
    return 0;
}
