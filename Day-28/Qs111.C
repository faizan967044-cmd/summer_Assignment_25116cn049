#include <stdio.h>

int main()
{
    int seats[10] = {0}; // 0 = Available, 1 = Booked
    int choice, seatNo, i;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nSeat Status:\n");
                for(i = 0; i < 10; i++)
                {
                    printf("Seat %d : %s\n", i + 1,
                           seats[i] == 0 ? "Available" : "Booked");
                }
                break;

            case 2:
                printf("Enter seat number (1-10): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10)
                {
                    printf("Invalid seat number!\n");
                }
                else if(seats[seatNo - 1] == 1)
                {
                    printf("Seat already booked!\n");
                }
                else
                {
                    seats[seatNo - 1] = 1;
                    printf("Ticket booked successfully for Seat %d!\n", seatNo);
                }
                break;

            case 3:
                printf("Enter seat number to cancel (1-10): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10)
                {
                    printf("Invalid seat number!\n");
                }
                else if(seats[seatNo - 1] == 0)
                {
                    printf("Seat is not booked!\n");
                }
                else
                {
                    seats[seatNo - 1] = 0;
                    printf("Ticket cancelled successfully for Seat %d!\n", seatNo);
                }
                break;

            case 4:
                printf("Exiting Ticket Booking System...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}