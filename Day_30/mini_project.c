// Program to develop a mini project using arrays, strings and functions

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

// Function to display student records
void displayRecords(struct Student student[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", student[i].rollNo);
        printf("Name        : %s\n", student[i].name);
        printf("Marks       : %.2f\n", student[i].marks);
    }
}

int main()
{
    struct Student student[3];
    int i;

    // Taking student details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &student[i].rollNo);

        printf("Name: ");
        scanf("%s", student[i].name);

        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }

    // Calling function
    displayRecords(student, 3);

    return 0;
}
