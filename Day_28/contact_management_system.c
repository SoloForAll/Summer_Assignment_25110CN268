// Program to create a contact management system

#include <stdio.h>

int main()
{
    char name[50];
    char phone[20];

    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("\n----- Contact Details -----\n");
    printf("Name  : %s\n", name);
    printf("Phone : %s\n", phone);

    return 0;
}
