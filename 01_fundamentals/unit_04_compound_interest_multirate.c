#include <stdio.h>
#include <math.h>
int main()
{
    float amount, principal = 1000.0, rate;
    int n = 10, i;
    for (int i = 1; i <= 10; i++)
    {
        for (rate = 5; rate <= 10; rate++)
        {
            amount = principal * pow(1 + (rate / 100), i);
            printf("%4d %6.2f ", i, amount);
        }
        printf("\n");
    }
    return 0;
}
