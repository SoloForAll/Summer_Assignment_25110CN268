// Program to copy one string to another

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", str1);

    // Copying string
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    // Displaying copied string
    printf("Copied String = %s", str2);

    return 0;
}
