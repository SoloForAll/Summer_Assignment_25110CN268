// Program to read data from a file

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // Opening file in read mode
    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    // Reading file character by character
    printf("File Contents:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Closing file
    fclose(fp);

    return 0;
}
