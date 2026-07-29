#include <stdio.h>
int main()
{
    int account_number, old_credit_limit, new_credit_limit, current_balance, used_balance, remaining_limit;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your Account number:");
        scanf("%d", &account_number);
        printf("Enter your old credit Limit:");
        scanf("%d", &old_credit_limit);
        printf("Enter current blance of you account:");
        scanf("%d", &current_balance);
        new_credit_limit = old_credit_limit / 2;
        printf("Your new credit limit is:%d\n", new_credit_limit);
        printf("Enter the amount you used:");
        scanf("%d", &used_balance);
        remaining_limit = new_credit_limit - used_balance;
        if (used_balance > new_credit_limit)
        {
            if (used_balance > current_balance)
                printf("You balance is not enough\n");
            else
                printf("You exceed your credit limit amount\n");
        }
        else
            printf("Your remaing limit is:%d\n", remaining_limit);
    }
    return 0;
}
