// Program to print prime numbers in a given range

#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    // Taking range input from user
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers are:\n");

    // Checking each number in the range
    for(i = start; i <= end; i++) {
        flag = 0;
        // Skipping numbers less than or equal to 1
        if(i <= 1)
        {
            continue;
        }
        // Checking prime condition
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        // Printing prime number
        if(flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
