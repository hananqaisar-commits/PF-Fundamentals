#include <stdio.h>
// Function Prototypes
unsigned long long int fac(int n);
void greets(int n);
void increasing(int n);
void decreasing(int n);
int main()
{
    int num1, num2;
    char ch1;
    printf("Enter a number:");
    scanf("%d", &num1);

    // function calls-----------------------------------
    do
    {
        printf("Factorial of %d is:%lld\n", num1, fac(num1));
        printf("Do you want to use it more?(Yes=y or No=n):\n");
        scanf(" %c", & ch1);
if (ch1 == 'Y' || ch1 == 'y')
{
     printf("Enter a number:");
        scanf("%d", &num1);
}

       
    } while (ch1 == 'Y' || ch1 == 'y');

    printf("Enter a number for greets and numbers: ");
    scanf("%d", &num2);
    greets(num2);
    printf("\n");
    increasing(num2);
    printf("\n");
    decreasing(num2);
    printf("\n");
    return 0;
}
// factorail--------------------------------------------
unsigned long long int fac(int n)
{
    unsigned long long int fact = 0;
    if (n == 0 || n == 1)
        return 1;
    fact = n * fac(n - 1);
    return fact;
}
// greeting----------------------------------------------
void greets(int n)
{
    if (n == 0)
        return;

    printf("Good Morning\n");

    greets(n - 1);
}
// increasing--------------------------------------------
void increasing(int n)
{
    if (n == 0)
        return;

    increasing(n - 1);

    printf("%d ", n);
}
// decreasing-------------------------------------------
void decreasing(int n)
{
    if (n == 0)
        return;
    printf("%d ", n);

    decreasing(n - 1);
}
