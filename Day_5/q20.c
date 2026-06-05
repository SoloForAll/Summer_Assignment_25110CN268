// Program to find largest prime factor of a number

#include <stdio.h>
int main() {
    int n, i, j, largest = 0, flag;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Finding factors
    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            // Checking prime condition
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            // Storing largest prime factor
            if(flag == 0)
            {
                largest = i;
            }
        }
    }
    printf("Largest Prime Factor = %d", largest);
    return 0;
}
