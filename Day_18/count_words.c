// Program to count words in a sentence

#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, words = 1;

    // Taking sentence input
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Counting words
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
        }

        i++;
    }

    // Displaying result
    printf("Total Words = %d", words);

    return 0;
}
