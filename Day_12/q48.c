// Program to check whether a number is perfect or not using function
#include <stdio.h>
// Function to check perfect number
int isPerfect(int num) {
    int i, sum = 0;
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calling function
    if(isPerfect(num))
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
    return 0;
}
