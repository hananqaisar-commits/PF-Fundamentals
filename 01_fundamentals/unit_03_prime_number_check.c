#include <stdio.h>
int main()
{
    int isprime = 1, n;
    printf("Enter number to check prime or not:");
    scanf("%d", &n);
    if (n <= 1)
        printf("Not a prime number");
    else
    {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        if (isprime == 1)
            printf("Prime number");
        else
            printf("Not a prime number");
    }
    return 0;
}
