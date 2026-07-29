#include <stdio.h>
int main()
{
    char item_name;
    int nitems;
    int quantity, ppr; //--->price per unit
    int total = 0;
    float grand_total = 0;
    float discount;
    int net;

    printf("Enter number items: ");
    scanf("%d", &nitems);

    for (int i = 1; i <= nitems; i++)
    {

        printf("\nEnter item %d name: ", i);
        scanf("%s", &item_name);
        printf("Enter item %d quantity: ", i);
        scanf("%d", &quantity);
        printf("Enter item %d price per unit: ", i);
        scanf("%d", &ppr);

        total = total + (quantity * ppr);

        printf("Total for item %d is: %d\n", i, total);

        grand_total = grand_total + total;

        if (grand_total > 5000)
        {

            discount = 0.1 * grand_total;
        }

        printf("-----------------------------\n");
        printf("Grand Total:%f\n", grand_total);
        if (grand_total > 5000)
        {

            printf("Discount (10%%)=%f\n", discount);
        }
        net = grand_total - discount;
        printf("Net payable amount is= %d\n", net);
        printf("------------------------------");
    }
}