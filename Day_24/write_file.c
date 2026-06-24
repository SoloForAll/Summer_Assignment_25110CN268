// Program to write data into a file

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    // Opening file in write mode
    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to create file");
        return 0;
    }

    // Taking input from user
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Writing data to file
    fputs(text, fp);

    // Closing file
    fclose(fp);

    printf("Data written successfully");

    return 0;
}
