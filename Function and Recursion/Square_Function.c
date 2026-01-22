// WAP to find in function to find square of a number enterd by user..........

#include <stdio.h>
#include <math.h>

int main() {
    int c;
    double a, b;

    printf("Enter no a to find power: ");
    scanf("%lf", &a);   // %lf for double input

    printf("Enter no b to find power: ");
    scanf("%lf", &b);   // %lf for double input

    double power = pow(a, b);

    printf("\t\t%.2lf is the Final answer.\n", power); // %.2lf for 2 decimal places

    printf("\n\t\t\tJUST FOR FUN...");
    scanf("%d", &c);

    return 0;
}


