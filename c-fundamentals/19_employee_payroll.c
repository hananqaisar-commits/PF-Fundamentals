// Program 19 - Employee Payroll System
// Overtime: hours > 40 → extra pay at 1.5x rate
// Tracks highest and lowest pay per batch

#include<stdio.h>
int main(){

    int id, hours, max_user, santval;
    float hourly_wage, pay;
    float highest, lowest;
    int first = 1;

    printf("ID\tHours\tWage\t\tTotal Pay\n");

    do
    {
        printf("How many employees (max=20): ");
        scanf("%d", &max_user);

        for (int i = 0; i < max_user; i++)
        {
            printf("\nEnter Employee ID: ");
            scanf("%d", &id);
            printf("Enter hours worked: ");
            scanf("%d", &hours);
            printf("Enter hourly wage: ");
            scanf("%f", &hourly_wage);

            if (hours <= 40)
                pay = hours * hourly_wage;
            else
                pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);

            printf("%d\t%d\t%.2f\t\t%.2f\n", id, hours, hourly_wage, pay);

            if (first)
            {
                highest = lowest = pay;
                first = 0;
            }
            else
            {
                if (pay > highest) highest = pay;
                if (pay < lowest)  lowest  = pay;
            }
        }

        printf("Highest pay this batch: %.2f\n", highest);
        printf("Lowest pay this batch:  %.2f\n", lowest);

        printf("Continue another batch? (1=Yes, 0=No): ");
        scanf("%d", &santval);

        first = 1; // reset for next batch

    } while (santval != 0);

    return 0;
}
