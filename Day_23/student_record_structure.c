// Program to store and display student record using structure

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    // Taking student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Displaying student details
    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
