// Program to create a marksheet generation system

#include <stdio.h>

int main()
{
    char studentName[50];
    int rollNo;
    float english, maths, science;
    float total, percentage;

    // Taking student details
    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter English Marks: ");
    scanf("%f", &english);

    printf("Enter Maths Marks: ");
    scanf("%f", &maths);

    printf("Enter Science Marks: ");
    scanf("%f", &science);

    // Calculating total and percentage
    total = english + maths + science;
    percentage = total / 3;

    // Displaying marksheet
    printf("\n----- Marksheet -----\n");
    printf("Name       : %s\n", studentName);
    printf("Roll No    : %d\n", rollNo);
    printf("English    : %.2f\n", english);
    printf("Maths      : %.2f\n", maths);
    printf("Science    : %.2f\n", science);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    return 0;
}
