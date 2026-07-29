#include <stdio.h>
int main()
{
    unsigned long long int fact = 1;
    int sum = 0, n;
    printf("Enter any number to print factorial:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial is:%d", fact);
    return 0;
}
