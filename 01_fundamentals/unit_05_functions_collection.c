#include <stdio.h>
#include <math.h>
#include <stdlib.h> //for rand function and srand function
#include <time.h>   //to use time as a seed in srand function

// Function prototypes
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

    //------------------------FUNCTION CALLS------------------------------
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

    //----------------------------------------------------
    printf("\n<-----Welcome to use simple calculator----->\n");

    do
    {
        printf("You want to use my simple calculator:(yes=y or no=n)? ");
        scanf(" %c", &choicee); // <-- add space before %c to consume newline

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
                printf("After adding the answer is: %d\n", add((int)a, (int)b));
                break;
            case 2:
                printf("After subtraction the answer is: %d\n", sub((int)a, (int)b));
                break;
            case 3:
                printf("After multiply the answer is: %d\n", mul((int)a, (int)b));
                break;
            case 4:
                printf("After dividing the answer is: %f\n", division((int)a, (int)b));
                break;
            default:
                printf("Sorry\nYou entered wrong choice for calculations\n<-----Thanks for using Calculator----->\n");
            }

            printf("Do you want to use this calculator more?(1=Yes, 0=No): ");
            scanf("%d", &more_run);
        }
        else
            more_run = 0;
    } while (more_run == 1);

    //-------------------------------------------------------
    int c, d;
    printf("Enter two numbers to find power(e.g:a^b): ");
    scanf("%d %d", &c, &d);
    printf("%d\n", integerpower(c, d));

    int e, f;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &e, &f);
    printf("Enter two integers to check second number is multiple of first number\nFirst number is %d\nSecond number is %d:\n %d*%d==%d?\n", e, f, e, e, f);
    checkmultiple(e, f);

    float g, h, i;
    printf("\nEnter number to check minimum number from this list: ");
    scanf("%f %f %f", &g, &h, &i);
    smallest(g, h, i);

    six_sided(1);

    return 0;
}

//------------------------FUNCTION DEFINITIONS------------------------

void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum from 1 to %d is: %d\n", n, sum);
}

unsigned long long fact(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int sum_of_digits(int n)
{
    int sum = 0;
    int a, b, c, ra, rb, rc;

    a = n / 10; ra = n % 10;
    b = a / 10; rb = a % 10;
    c = b;

    sum = b + rb + ra;
    return sum;
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
        printf("%d is Even number\n", n);
    else
        printf("%d is Odd number\n", n);
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
    int b = a / 10, rb = a % 10;
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
    printf("                   Bill Summary          \n");
    printf("----------------------------------------------------\n");
    printf("Total Excl GST: %.2f\n", grand_total);
    printf("FBR POS Service: %.2f\n", tax);
    if (grand_total > 5000)
        printf("Discount (10%%) = %.2f\n", discount);

    net = grand_total - discount;
    printf("Net payable amount/To be Paid amount is = %.2f\n", net);
    printf("-------------------------------------------------------\n");
    printf("           Thanks for shopping (<...>)\n");
    printf("-------------------------------------------------------\n");
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float division(int a, int b) { return (float)a / b; }

unsigned long int integerpower(unsigned long int a, unsigned long int b)
{
    unsigned long int sum = 1;
    for (int i = 1; i <= b; i++)
        sum *= a;
    return sum;
}

void checkmultiple(int a, int b)//
{
    if (b % a == 0)
        printf("1(true)\n");
    else
        printf("0(False)\n");
}

void smallest(float a, float b, float c)
{
    printf("%f %f %f", a, b, c);
    if (a < b && a < c)
        printf("\n%f is the smallest number among this.\n", a);
    else if (b < c && b < a)
        printf("\n%f is the smallest number among this.\n", b);
    else
        printf("\n%f is the smallest number among this.\n", c);
}

void six_sided(int finalvalue)
{
    unsigned int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    unsigned int sum;
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

    printf("1 appears %d times\n", f1);
    printf("2 appears %d times\n", f2);
    printf("3 appears %d times\n", f3);
    printf("4 appears %d times\n", f4);
    printf("5 appears %d times\n", f5);
    printf("6 appears %d times\n", f6);

    sum = f1 + f2 + f3 + f4 + f5 + f6;
    printf("Total number was: %d\n", sum);
}