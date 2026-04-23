// Program 07 - Reverse a 5-Digit Number (Manual Method)
// Output Example: 54321 → 1 2 3 4 5

#include<stdio.h>
int main(){

    int number;
    int a, b, c, d, e;
    int Ra, Rb, Rc, Rd;

    printf("Enter any number of 5 digits: ");
    scanf("%d", &number);

    a  = number / 10;   // removes last digit
    Ra = number % 10;   // extracts last digit → 1

    b  = a / 10;
    Rb = a % 10;        // → 2

    c  = b / 10;
    Rc = b % 10;        // → 3

    d  = c / 10;
    Rd = c % 10;        // → 4

    e  = d;             // remaining → 5

    printf("Reversed: %d\t%d\t%d\t%d\t%d\n", Ra, Rb, Rc, Rd, e);

    return 0;
}
