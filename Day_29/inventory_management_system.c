// Program to create an inventory management system

#include <stdio.h>

int main()
{
    char itemName[50];
    int itemId;
    int quantity;

    // Taking inventory details
    printf("Enter Item ID: ");
    scanf("%d", &itemId);

    printf("Enter Item Name: ");
    scanf("%s", itemName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    // Displaying inventory details
    printf("\n----- Inventory Details -----\n");
    printf("Item ID   : %d\n", itemId);
    printf("Item Name : %s\n", itemName);
    printf("Quantity  : %d\n", quantity);

    return 0;
}
