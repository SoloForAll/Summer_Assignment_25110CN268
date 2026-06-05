// Program to print factors of a number

#include <stdio.h>
int main() {
    int n, i;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");
    // Finding factors
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
