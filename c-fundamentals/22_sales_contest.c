// Program 22 - Sales Contest (Highest & Lowest Sales)
// Finds the best and worst performing salesman

#include<stdio.h>
int main(){

    int sales, a;
    float highest, lowest;
    int first = 1;

    printf("Enter number of salesmen: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("Enter sale of salesman %d: ", i);
        scanf("%d", &sales);

        if (first)
        {
            highest = lowest = sales;
            first = 0;
        }
        else
        {
            if (sales > highest) highest = sales;
            if (sales < lowest)  lowest  = sales;
        }
    }

    printf("\nHighest sales: %.2f → Winner of the CONTEST!\n", highest);
    printf("Lowest sales:  %.2f\n", lowest);

    return 0;
}
