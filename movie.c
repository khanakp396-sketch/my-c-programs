#include <stdio.h>

int main()
{
    int type, movie, tickets, price, total;

    printf("===== MOVIE TICKET BOOKING =====\n");

    printf("\nSelect Movie Type:\n");
    printf("1. Horror\n");
    printf("2. Romantic\n");
    printf("3. Thriller\n");

    printf("\nEnter movie type (1-3): ");
    scanf("%d", &type);

    switch (type)
    {
        case 1:
            printf("\n===== HORROR MOVIES =====\n");
            printf("1. The Conjuring - Rs. 200\n");
            printf("2. Annabelle     - Rs. 180\n");
            printf("3. Insidious     - Rs. 150\n");
            break;

        case 2:
            printf("\n===== ROMANTIC MOVIES =====\n");
            printf("1. Titanic       - Rs. 200\n");
            printf("2. The Notebook  - Rs. 180\n");
            printf("3. Sita Ramam    - Rs. 150\n");
            break;

        case 3:
            printf("\n===== THRILLER MOVIES =====\n");
            printf("1. Drishyam      - Rs. 200\n");
            printf("2. Shutter Island - Rs. 180\n");
            printf("3. Andhadhun     - Rs. 150\n");
            break;

        default:
            printf("Invalid movie type!\n");
            return 0;
    }

    printf("\nSelect a movie (1-3): ");
    scanf("%d", &movie);

    switch (movie)
    {
        case 1:
            price = 200;
            break;

        case 2:
            price = 180;
            break;

        case 3:
            price = 150;
            break;

        default:
            printf("Invalid movie selection!\n");
            return 0;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (tickets <= 0)
    {
        printf("Invalid number of tickets!\n");
        return 0;
    }

    total = price * tickets;

    printf("\n===== BOOKING SUMMARY =====\n");

    printf("Movie Type: ");

    switch (type)
    {
        case 1:
            printf("Horror\n");
            break;

        case 2:
            printf("Romantic\n");
            break;

        case 3:
            printf("Thriller\n");
            break;
    }

    printf("Movie Number: %d\n", movie);
    printf("Ticket Price: Rs. %d\n", price);
    printf("Number of Tickets: %d\n", tickets);
    printf("Total Amount: Rs. %d\n", total);

    printf("\nBooking Successful!\n");
    printf("Enjoy Your Movie!\n");

    return 0;
}
