// Program to create student record system using arrays and strings

#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student student[5];
    int i;

    // Taking student details
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &student[i].rollNo);

        printf("Name: ");
        scanf("%s", student[i].name);

        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }

    // Displaying student records
    printf("\n----- Student Records -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", student[i].rollNo);
        printf("Name        : %s\n", student[i].name);
        printf("Marks       : %.2f\n", student[i].marks);
    }

    return 0;
}
