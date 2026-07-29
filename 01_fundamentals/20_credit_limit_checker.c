// Program 20 - Credit Limit Checker
// New credit limit = old limit / 2
// Checks if used amount exceeds new limit or balance

#include<stdio.h>
int main(){

    int account_number, old_credit_limit, new_credit_limit;
    int current_balance, used_balance, remaining_limit;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Account number: ");
        scanf("%d", &account_number);

        printf("Enter old credit limit: ");
        scanf("%d", &old_credit_limit);

        printf("Enter current balance: ");
        scanf("%d", &current_balance);

        new_credit_limit = old_credit_limit / 2;
        printf("Your new credit limit is: %d\n", new_credit_limit);

        printf("Enter amount used: ");
        scanf("%d", &used_balance);

        remaining_limit = new_credit_limit - used_balance;

        if (used_balance > new_credit_limit)
        {
            if (used_balance > current_balance)
                printf("Your balance is not enough\n");
            else
                printf("You exceeded your credit limit\n");
        }
        else
        {
            printf("Remaining credit limit: %d\n", remaining_limit);
        }
    }

    return 0;
}
