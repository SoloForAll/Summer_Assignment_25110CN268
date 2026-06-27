// Program to create an employee management system

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i;

    // Taking employee details
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Displaying employee details
    printf("\nEmployee Records\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Salary      : %.2f\n", emp[i].salary);
    }

    return 0;
}
