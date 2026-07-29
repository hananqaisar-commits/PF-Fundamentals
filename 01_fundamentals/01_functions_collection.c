// Program - Functions Collection
// Contains: sum, factorial, sum_of_digits, prime, average,
//           even_odd, character grid, reverse, billing system,
//           calculator, power, multiple check, smallest, dice roller

#include<stdio.h>
#include<math.h>
#include<stdlib.h>  // for rand() and srand()
#include<time.h>    // for time() as seed in srand()

// ─── Function Prototypes ────────────────────────────────────────────
void sum(int n);
unsigned long long fact(int n);
int sum_of_digits(int n);
void prime(int n);
float average(int a, int b, int c);
void even_odd(int n);
void chracter(int n);
void reverse(int number);
void billing_system(int nitems);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float division(int a, int b);
unsigned long int integerpower(unsigned long int a, unsigned long int b);
void checkmultiple(int a, int b);
void smallest(float a, float b, float c);
void six_sided(int finalvalue);

// ─── Main ────────────────────────────────────────────────────────────
int main()
{
    int n[5];
    int sizeOfprime = 5;
    int nasterics;
    int number;
    int nitems;
    int choice;
    int more_run;
    float a, b;
    char choicee;

    // Function calls
    sum(10);
    printf("Factorial is: %llu\n", fact(32));
    printf("The sum of 3 digits is %d\n", sum_of_digits(764));

    printf("Enter numbers to find prime (5 numbers):\n");
    for (int i = 0; i < sizeOfprime; i++)
    {
        scanf("%d", &n[i]);
        prime(n[i]);
    }

    printf("Average is: %6f\n", average(3, 9, 5));
    even_odd(19);

    printf("Enter any number to print square: ");
    scanf("%d", &nasterics);
    chracter(nasterics);

    printf("Enter 3 digits only (max 3): ");
    scanf("%d", &number);
    reverse(number);

    even_odd(46);

    printf("Enter any number to print square: ");
    scanf("%d", &nasterics);
    chracter(nasterics);

    printf("Average is: %6f\n", average(6, 9, 7));
    printf("Average is: %6f\n", average(3, 67, 5));

    printf("Enter number of items (max 20): ");
    scanf("%d", &nitems);

    if (nitems <= 20)
        billing_system(nitems);
    else
        printf("Sorry\nYou entered items more than 20\nProgramme ends here\n\tThanks for using programme\n");

    printf("\n<-----Welcome to use simple calculator----->\n");

    do
    {
        printf("You want to use my simple calculator:(yes=y or no=n)? ");
        scanf(" %c", &choicee);

        if (choicee == 'y' || choicee == 'Y')
        {
            printf("Enter your choice (1=add, 2=sub, 3=multiply, 4=division): ");
            scanf("%d", &choice);

            if (choice > 4)
                break;

            printf("Enter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);

            switch (choice)
            {
            case 1:
                printf("After adding: %d\n", add((int)a, (int)b));
                break;
            case 2:
                printf("After subtraction: %d\n", sub((int)a, (int)b));
                break;
            case 3:
                printf("After multiply: %d\n", mul((int)a, (int)b));
                break;
            case 4:
                printf("After dividing: %f\n", division((int)a, (int)b));
                break;
            default:
                printf("Sorry, wrong choice!\n");
            }

            printf("Use calculator more? (1=Yes, 0=No): ");
            scanf("%d", &more_run);
        }
        else
            more_run = 0;

    } while (more_run == 1);

    int c, d;
    printf("Enter two numbers to find power (a^b): ");
    scanf("%d %d", &c, &d);
    printf("%lu\n", integerpower(c, d));

    int e, f;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &e, &f);
    printf("Is %d a multiple of %d?\n", f, e);
    checkmultiple(e, f);

    float g, h, ii;
    printf("\nEnter 3 numbers to find smallest: ");
    scanf("%f %f %f", &g, &h, &ii);
    smallest(g, h, ii);

    six_sided(1);

    return 0;
}

// ─── Function Definitions ────────────────────────────────────────────

void sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    printf("Sum from 1 to %d is: %d\n", n, s);
}

unsigned long long fact(int n)
{
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int sum_of_digits(int n)
{
    int a, b, c, ra, rb;
    a = n / 10;   ra = n % 10;
    b = a / 10;   rb = a % 10;
    c = b;
    return c + rb + ra;
}

void prime(int n)
{
    int is_prime = 1;

    if (n <= 1)
        is_prime = 0;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is Not a Prime number\n", n);
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

void even_odd(int n)
{
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}

void chracter(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
}

void reverse(int number)
{
    int a = number / 10, ra = number % 10;
    int b = a / 10,      rb = a % 10;
    int c = b;
    printf("Reverse is: %d%d%d\n", ra, rb, c);
}

void billing_system(int nitems)
{
    char item_name[20];
    int quantity, ppr;
    int total[20] = {0};
    float grand_total = 0, discount = 0, net;
    float tax = 1.0;

    printf("----------------------------------------------------\n");

    for (int i = 0; i < nitems; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", item_name);
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        printf("Enter price per unit: ");
        scanf("%d", &ppr);

        total[i] = quantity * ppr;
        printf("Total for %s is: %d\n", item_name, total[i]);
        grand_total += total[i];
    }

    if (grand_total > 5000)
        discount = 0.1 * grand_total;

    grand_total += tax;

    printf("----------------------------------------------------\n");
    printf("           Bill Summary\n");
    printf("----------------------------------------------------\n");
    printf("Total Excl GST:  %.2f\n", grand_total);
    printf("FBR POS Service: %.2f\n", tax);
    if (grand_total > 5000)
        printf("Discount (10%%) = %.2f\n", discount);

    net = grand_total - discount;
    printf("Net Payable:     %.2f\n", net);
    printf("----------------------------------------------------\n");
    printf("        Thanks for shopping (<...>)\n");
    printf("----------------------------------------------------\n");
}

int add(int a, int b)      { return a + b; }
int sub(int a, int b)      { return a - b; }
int mul(int a, int b)      { return a * b; }
float division(int a, int b) { return (float)a / b; }

unsigned long int integerpower(unsigned long int a, unsigned long int b)
{
    unsigned long int result = 1;
    for (int i = 1; i <= (int)b; i++)
        result *= a;
    return result;
}

void checkmultiple(int a, int b)
{
    if (b % a == 0)
        printf("True (1): %d is a multiple of %d\n", b, a);
    else
        printf("False (0): %d is not a multiple of %d\n", b, a);
}

void smallest(float a, float b, float c)
{
    printf("Numbers: %f %f %f\n", a, b, c);
    if (a < b && a < c)
        printf("%.2f is the smallest\n", a);
    else if (b < c && b < a)
        printf("%.2f is the smallest\n", b);
    else
        printf("%.2f is the smallest\n", c);
}

void six_sided(int finalvalue)
{
    unsigned int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;
    unsigned int total;
    int face;

    srand(time(NULL));

    for (int roll = 1; roll <= 6000000; roll++)
    {
        face = 1 + (rand() % 6);
        switch (face)
        {
        case 1: f1++; break;
        case 2: f2++; break;
        case 3: f3++; break;
        case 4: f4++; break;
        case 5: f5++; break;
        case 6: f6++; break;
        }
    }

    printf("\n--- Dice Roll Results (6,000,000 rolls) ---\n");
    printf("1 appears: %u times\n", f1);
    printf("2 appears: %u times\n", f2);
    printf("3 appears: %u times\n", f3);
    printf("4 appears: %u times\n", f4);
    printf("5 appears: %u times\n", f5);
    printf("6 appears: %u times\n", f6);

    total = f1 + f2 + f3 + f4 + f5 + f6;
    printf("Total rolls: %u\n", total);
}
