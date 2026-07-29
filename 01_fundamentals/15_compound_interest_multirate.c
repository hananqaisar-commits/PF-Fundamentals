// Program 15 - Compound Interest Table (Multiple Rates 5%-10%)
// Rows = Years, Columns = Different Interest Rates

#include<stdio.h>
#include<math.h>
int main(){

    float amount;
    float principal = 1000.0;

    printf("Year\t");
    for (float r = 5; r <= 10; r++)
        printf("Rate=%.0f%%\t", r);
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%4d\t", i);
        for (float rate = 5; rate <= 10; rate++)
        {
            amount = principal * pow(1 + (rate / 100), i);
            printf("%6.2f\t", amount);
        }
        printf("\n");
    }

    return 0;
}
