// Program 17 - Weekly Salary Calculator (Fixed + Commission)
// Fixed salary = 200, Commission = 9% of sales
// Enter -1 to stop

#include<stdio.h>
int main(){

    float fix_salary = 200.0;
    float total_sales_week;
    float commission;
    float total_salary;

    printf("Enter sales of week in dollars (-1 to end): ");
    scanf("%f", &total_sales_week);

    while (total_sales_week != -1)
    {
        commission   = (9.0 / 100.0) * total_sales_week;
        total_salary = fix_salary + commission;

        printf("Salary for this week: %.2f\n", total_salary);

        printf("Enter sales of week in dollars (-1 to end): ");
        scanf("%f", &total_sales_week);
    }

    return 0;
}
