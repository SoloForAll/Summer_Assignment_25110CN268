// Program to create a bank account system

#include <stdio.h>

int main()
{
    char name[50];
    float balance, amount;
    int choice;

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance -= amount;
                printf("Updated Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        case 3:
            printf("Current Balance = %.2f", balance);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
