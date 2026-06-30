// Program to create a mini employee management system

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee employee[5];
    int i;

    // Taking employee details
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employee[i].id);

        printf("Name: ");
        scanf("%s", employee[i].name);

        printf("Salary: ");
        scanf("%f", &employee[i].salary);
    }

    // Displaying employee records
    printf("\n----- Employee Records -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", employee[i].id);
        printf("Name        : %s\n", employee[i].name);
        printf("Salary      : %.2f\n", employee[i].salary);
    }

    return 0;
}
