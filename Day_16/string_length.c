// Program to find length of a string without using strlen()

#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculating length
    while(str[length] != '\0')
    {
        length++;
    }

    // Displaying length
    printf("Length of string = %d", length);

    return 0;
}
