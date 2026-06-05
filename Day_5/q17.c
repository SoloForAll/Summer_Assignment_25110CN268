// Program to check whether a number is perfect or not

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Finding factors and their sum
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    // Checking perfect number condition
    if(sum == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
    return 0;
}
