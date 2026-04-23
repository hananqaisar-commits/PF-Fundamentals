// Program 21 - Billing System
// Calculates total, applies tax, 10% discount if > 5000

#include<stdio.h>
int main(){

    char item_name[20];
    int quantity, ppr; // ppr = price per unit
    int total[20] = {0};
    float grand_total = 0;
    float discount = 0;
    float net;
    float tax = 1.99;
    int nitems;

    printf("Enter number of items: ");
    scanf("%d", &nitems);

    for (int i = 0; i < nitems; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", item_name);
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        printf("Enter price per unit: ");
        scanf("%d", &ppr);

        total[i] = quantity * ppr;
        printf("Total for %s is: %d\n", item_name, total[i]);

        grand_total = tax + grand_total + total[i];

        if (grand_total > 5000)
            discount = 0.1 * grand_total;
    }

    printf("-----------------------------\n");
    printf("Tax:          %.2f\n", tax);
    printf("Grand Total:  %.2f\n", grand_total);

    if (grand_total > 5000)
        printf("Discount (10%%) = %.2f\n", discount);

    net = grand_total - discount;
    printf("Net Payable:  %.2f\n", net);
    printf("-----------------------------\n");
    printf("Thanks for Shopping ('-')\n");
    printf("-----------------------------\n");

    return 0;
}
