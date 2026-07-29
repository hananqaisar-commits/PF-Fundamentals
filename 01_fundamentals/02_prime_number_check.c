// Program 02 - Prime Number Check
// Output Example: n=7 → Prime | n=9 → Not Prime

#include<stdio.h>
int main(){

    int n;
    int isprime = 1;

    printf("Enter any number to check prime: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Sorry, not a prime number\n");
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isprime = 0; // divisor found, not prime
                break;
            }
        }

        if (isprime == 1)
            printf("Prime number");
        else
            printf("Not a prime number");
    }

    return 0;
}
