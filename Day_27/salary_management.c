// Program to create a salary management system

#include <stdio.h>

int main()
{
    char employeeName[50];
    float basicSalary;
    float hra, da, grossSalary;

    // Taking employee details
    printf("Enter Employee Name: ");
    scanf("%s", employeeName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculating salary
    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    grossSalary = basicSalary + hra + da;

    // Displaying salary details
    printf("\nSalary Details\n");
    printf("Employee Name : %s\n", employeeName);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);

    return 0;
}
