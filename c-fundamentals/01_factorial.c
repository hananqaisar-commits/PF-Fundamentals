// Program 01 - Factorial
// Output Example: n=5 → 120

#include<stdio.h>
int main(){

    int n;
    unsigned long long int fact = 1;

    printf("Enter any number to find Factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is: %llu", fact); // llu = unsigned long long int

    return 0;
}
