// Program 13 - Product of Odd Numbers (1 to 15)
// Output: 2027025

#include<stdio.h>
int main(){

    int product = 1;

    for (int i = 1; i <= 15; i += 2)
    {
        product *= i;
    }

    printf("Product of odd numbers from 1 to 15 is: %d", product);

    return 0;
}
