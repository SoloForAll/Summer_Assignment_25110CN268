// Program to check whether a number is strong or not

#include <stdio.h>
int main() {
    int n, original, remainder, i;
    int fact, sum = 0;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    // Calculating sum of factorials of digits
    while(n != 0)
    {
        remainder = n % 10;
        fact = 1;
        for(i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    // Checking strong number condition
    if(sum == original)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
    return 0;
}
