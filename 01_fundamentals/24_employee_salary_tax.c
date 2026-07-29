// Program 24 - Employee Salary with Tax Deduction
// Overtime: hours > 40 → +200/hour extra
// Tax: 10% if gross > 50000, else 5%

#include <stdio.h>
int main()
{

    int salary, hours, count, santval;
    char name[50];
    int total_salary, gross, tax, net, allmoney = 0;

    printf("How many employees do you want to enter: ");
    scanf("%d", &count);

    do
    {
        gross = 0;

        for (int i = 0; i < count; i++)
        {
            printf("\nEnter Employee name: ");
            scanf("%s", name);
            printf("Enter Basic salary: ");
            scanf("%d", &salary);
            printf("Enter working hours: ");
            scanf("%d", &hours);

            if (hours > 40)
                total_salary = salary + ((hours - 40) * 200);
            else
                total_salary = salary;

            gross += total_salary;

            if (gross > 50000)
                tax = 0.1 * gross;
            else
                tax = 0.05 * gross;

            net = gross - tax;

            printf("Employee:     %s\n", name);
            printf("Gross salary: %d\n", gross);
            printf("Tax deducted: %d\n", tax);
            printf("Net pay:      %d\n", net);

            allmoney += net;
        }

        printf("\nTotal amount paid to all employees: %d\n", allmoney);

        printf("Add more employees? (1=Yes, 0=No): ");
        scanf("%d", &santval);

    } while (santval != 0);

    return 0;
}
