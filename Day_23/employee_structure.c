// Program to store and display employee details using structure

#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    // Taking employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.empId);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Displaying employee details
    printf("\nEmployee Details:\n");
    printf("Employee ID = %d\n", e.empId);
    printf("Employee Name = %s\n", e.name);
    printf("Salary = %.2f\n", e.salary);

    return 0;
}
