// Program to sort words by length

#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][50], temp[50];
    int i, j;

    // Taking words as input
    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%s", word[i]);
    }

    // Sorting words according to length
    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Displaying sorted words
    printf("Words sorted by length:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}
