// Program to find missing number in an array

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int expectedSum = 0, actualSum = 0;

    // Taking size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    // Calculating expected sum
    for(i = 1; i <= n; i++)
    {
        expectedSum += i;
    }

    // Displaying missing number
    printf("Missing Number = %d", expectedSum - actualSum);

    return 0;
}
