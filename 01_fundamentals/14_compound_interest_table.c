// Program 14 - Compound Interest Table (Single Rate)
// Principal=1000, Rate=5%, Years 1-10

#include<stdio.h>
#include<math.h>
int main(){

    float amount;
    float principal = 1000.0;
    float rate = 0.05;

    printf("Year\tAmount\n");
    for (int i = 1; i <= 10; i++)
    {
        amount = principal * pow(1 + rate, i);
        printf("%4d\t%6.2f\n", i, amount);
    }

    return 0;
}
