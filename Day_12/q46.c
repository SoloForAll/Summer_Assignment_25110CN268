// Program to check whether a number is Armstrong or not using function

#include <stdio.h>
// Function to check Armstrong number
int isArmstrong(int num) {
    int original, remainder, sum = 0;
    original = num;
    while(num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }
    if(sum == original)
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
    if(isArmstrong(num))
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
