// Program to find x raised to power n without using pow()

#include <stdio.h>

int main()
{
    int x, n, i;
    long long int result = 1;

    // Taking input from user
    printf("Enter base number: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    // Calculating power
    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    // Printing result
    printf("Result = %lld", result);

    return 0;
}
