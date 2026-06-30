// Program to create a mini library system

#include <stdio.h>

struct Book
{
    int bookId;
    char bookName[50];
};

int main()
{
    struct Book book[3];
    int i;

    // Taking book details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Name: ");
        scanf("%s", book[i].bookName);
    }

    // Displaying book details
    printf("\n----- Library Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID   : %d\n", book[i].bookId);
        printf("Book Name : %s\n", book[i].bookName);
    }

    return 0;
}
