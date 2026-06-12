// Program to check whether a number is palindrome or not using function

#include <stdio.h>
// Function to check palindrome
int isPalindrome(int num)
{
    int original, reverse = 0, remainder;
    original = num;
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(original == reverse)
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
    if(isPalindrome(num))
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
    return 0;
}
