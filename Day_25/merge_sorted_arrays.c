// Program to merge two sorted arrays

#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i = 0, j = 0, k = 0;

    // Taking size of both arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;

    // Merging both sorted arrays
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while(j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    // Displaying merged array
    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
