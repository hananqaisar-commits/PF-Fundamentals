#include <stdio.h>
int main()
{
    int n;
    int isprime = 1;
    printf("Enter any number to check prime:");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Sorry\n");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}
