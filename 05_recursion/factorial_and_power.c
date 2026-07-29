#include <stdio.h>
unsigned long int integerpower(unsigned long int a, unsigned long int b)
{
    unsigned long int sum = 1;
    for (int i = 1; i <= b; i++)
        sum *= a;
    return sum;
}

unsigned long long int factorial(int n)

{
    int fact = 0;
    if (n == 1 || n == 0)//base case 
        return 1;

    fact = n * factorial(n - 1);
    return fact;
}

int main()
{
    int n1;
    int c, d;

    printf("Enter a number:");
    scanf("%d", &n1);

    printf("Factorial of %d is : %llu\n", n1, factorial(n1));

    printf("Enter two numbers to find power(e.g:a^b): ");
    scanf("%d %d", &c, &d);
    printf("%d\n", integerpower(c, d));

    //  printf("Enter a number:");
    // scanf("%d", &n1);

    // printf("Factorial of %d is : %llu\n", n1, factorial(n1));
    return 0;
}