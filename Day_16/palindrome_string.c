// Program to check whether a string is palindrome or not

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding string length
    while(str[length] != '\0')
    {
        length++;
    }

    // Checking palindrome condition
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    // Displaying result
    if(flag)
    {
        printf("Palindrome String");
    }
    else
    {
        printf("Not a Palindrome String");
    }

    return 0;
}
