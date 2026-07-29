// Program 18 - Loan Interest Calculator
// Formula: Interest = (Principal * Rate * Days) / 365
// Enter -1 to stop

#include<stdio.h>
int main(){

    float principle, rate, interest;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principle);

    while (principle != -1)
    {
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter loan term in days: ");
        scanf("%d", &days);

        interest = (principle * rate * days) / 365;

        printf("Interest charges on %.2f is $%.2f\n", principle, interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principle);
    }

    return 0;
}
