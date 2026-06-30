// Program to create a library management system

#include <stdio.h>

int main()
{
    char bookName[50];
    int bookId;
    int choice;

    printf("----- Library Management System -----\n");
    printf("1. Add Book\n");
    printf("2. Display Book\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &bookId);

            printf("Enter Book Name: ");
            scanf("%s", bookName);

            printf("Book Added Successfully.");
            break;

        case 2:
            printf("Book ID : %d\n", bookId);
            printf("Book Name : %s\n", bookName);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
