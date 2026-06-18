// Program to remove spaces from a string

#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, j = 0;

    // Taking string input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing spaces
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }

        i++;
    }

    result[j] = '\0';

    // Displaying result
    printf("String without spaces = %s", result);

    return 0;
}
