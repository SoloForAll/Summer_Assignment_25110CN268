// Program to print Armstrong numbers in a given range

#include <stdio.h>
int main() {
    int start, end, num, original, remainder, sum;

    // Taking range input from user
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");
    // Checking each number in range
    for(num = start; num <= end; num++)
    {
        original = num;
        sum = 0;
        while(original != 0)
        {
            remainder = original % 10;
            sum = sum + (remainder * remainder * remainder);
            original = original / 10;
        }
        // Printing Armstrong number
        if(sum == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}
