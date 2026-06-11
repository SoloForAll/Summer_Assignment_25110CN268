// Program to find maximum of two numbers using function

#include <stdio.h>

// Function to find maximum number
int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling function and displaying result
    printf("Maximum Number = %d", maximum(num1, num2));

    return 0;
}
