// Program to create a ticket booking system

#include <stdio.h>

int main()
{
    char passengerName[50];
    int seats;

    printf("Enter Passenger Name: ");
    scanf("%s", passengerName);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", passengerName);
    printf("Seats Booked   : %d\n", seats);
    printf("Booking Successful");

    return 0;
}
