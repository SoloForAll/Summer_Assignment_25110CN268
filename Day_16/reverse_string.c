// Program to reverse a string

#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding string length
    while(str[length] != '\0')
    {
        length++;
    }

    // Reversing string
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Displaying reversed string
    printf("Reversed String = %s", str);

    return 0;
}
