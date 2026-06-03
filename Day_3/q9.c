// Program to check whether a number is prime or not

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Numbers less than or equal to 1 are not prime
    if(n <= 1) {
        printf("Not a Prime Number");
    } else {
        // Checking divisibility
        for(i = 2; i < n; i++) 
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        // Displaying result
        if (flag == 0) {
            printf("Prime Number");
        } else {
            printf("Not a Prime Number");
        }
   }
    return 0;
}
