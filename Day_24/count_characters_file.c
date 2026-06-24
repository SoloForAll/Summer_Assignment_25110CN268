// Program to count characters in a file

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;

    // Opening file in read mode
    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    // Counting characters
    while((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    // Closing file
    fclose(fp);

    printf("Total Characters = %d", count);

    return 0;
}
