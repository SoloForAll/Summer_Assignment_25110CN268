// Program to append data to a file

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    // Opening file in append mode
    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return 0;
    }

    // Taking input from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Appending data
    fputs(text, fp);

    // Closing file
    fclose(fp);

    printf("Data appended successfully");

    return 0;
}
