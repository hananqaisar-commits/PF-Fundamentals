#include <stdio.h>

int main()
{
    int seatClass;
    int seats[10] = {0};      // 0 = empty, 1 = booked
    int passport[10] = {0};

    int firstClassCount = 0;
    int economyCount = 0;
    int passportNumber = 101231;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter 1 for First Class or 2 for Economy: ");
        scanf("%d", &seatClass);

        if (seatClass == 1)
        {
            if (firstClassCount == 5)
            {
                printf("First class full. Please choose economy.\n");
                i--;
                continue;
            }
            seats[i] = 1;
            firstClassCount++;
        }
        else if (seatClass == 2)
        {
            if (economyCount == 5)
            {
                printf("Economy class full. Please choose first class.\n");
                i--;
                continue;
            }
            seats[i] = 2;
            economyCount++;
        }
        else
        {
            printf("Invalid choice! Try again.\n");
            i--;
            continue;
        }

        passport[i] = passportNumber += 23;
    }

    printf("\nPassenger List:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Passenger %d | Seat %d | Passport %d | ",
               i + 1, i + 1, passport[i]);

        if (seats[i] == 1)
            printf("First Class\n");
        else if (seats[i]==2)
        {
            printf("Economy Class\n");
        }
        else
            printf("No Ticket");
        
            
    }

    return 0;
}
