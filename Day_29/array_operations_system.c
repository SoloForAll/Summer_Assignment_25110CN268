// Program to create a menu-driven array operations system

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, sum = 0;

    // Taking array input
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Displaying menu
    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements:\n");

            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                sum += arr[i];
            }

            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
