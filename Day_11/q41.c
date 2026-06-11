// Program to find sum of two numbers using function

#include <stdio.h>
// Function to calculate sum
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Calling function and displaying result
    printf("Sum = %d", sum(num1, num2));
    return 0;
}
