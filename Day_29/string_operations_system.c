// Program to create a menu-driven string operations system

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    // Taking string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Displaying menu
    printf("\n1. Find Length\n");
    printf("2. Convert to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
        {
            int i;

            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase String = %s", str);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}
