// Program to convert lowercase string to uppercase

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Taking string input
    printf("Enter a lowercase string: ");
    scanf("%s", str);

    // Converting to uppercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Displaying result
    printf("Uppercase String = %s", str);

    return 0;
}
