#include <stdio.h>
int main()
{
    unsigned long long fact = 1;
    int n;
    printf("Enter number to print factorial:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    printf("Your factorial answer is:%lld", fact);
    return 0;
}
