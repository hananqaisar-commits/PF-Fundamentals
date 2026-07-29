#include <stdio.h>
#include <math.h>
int main()
{
    float amount, principal = 1000.0, rate = 0.05;
    int n = 10, i;
    for (int i = 1; i <= 10; i++)
    {
        amount = principal * pow(1 + (rate / 100.0), i);
        printf("%4d %6.2f\n", i, amount);
    }
    return 0;
}
