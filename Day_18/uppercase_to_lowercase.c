// Program to convert uppercase string to lowercase

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Taking string input
    printf("Enter an uppercase string: ");
    scanf("%s", str);

    // Converting to lowercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    // Displaying result
    printf("Lowercase String = %s", str);

    return 0;
}
