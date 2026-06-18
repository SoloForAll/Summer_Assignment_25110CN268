// Program to find frequency of a character in a string

#include <stdio.h>

int main()
{
    char str[200], ch;
    int i = 0, count = 0;

    // Taking string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Taking character input
    printf("Enter character to search: ");
    scanf("%c", &ch);

    // Counting frequency
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    // Displaying result
    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
