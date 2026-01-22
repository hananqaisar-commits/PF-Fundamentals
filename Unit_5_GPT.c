#include <stdio.h>
#include <math.h>
#include <stdlib.h> // rand, srand
#include <time.h>   // time

// Function prototypes
void sum(int n);
unsigned long long fact_int_safe(int n); // safe integer factorial up to 20
long double fact_approx(int n);          // approximate factorial for larger n
int sum_of_digits(int n);
void prime(int n);
float average(int a, int b, int c);
void even_odd(int n);
void chracter(int n);
void reverse_number(int number);
void billing_system(int nitems);
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double division(double a, double b);
unsigned long int integerpower(unsigned long int a, unsigned long int b);
void checkmultiple(int a, int b);
void smallest(float a, float b, float c);
void six_sided(unsigned int rolls);

int main()
{
    srand((unsigned) time(NULL)); // seed random once

    int n[5];
    int sizeOfprime = 5;
    int nasterics;
    int number;
    int nitems;
    int choice;
    int more_run;
    double a, b;
    char choicee;

    //------------------------FUNCTION CALLS------------------------------
    sum(10); // sum from 1 to 10
    //--------------------------------------------------------------------
    // factorial: compute safely for integers up to 20; for larger n print approximate
    int fact_n = 32;
    unsigned long long f = fact_int_safe(fact_n);
    if (f != 0ULL) {
        printf("Factorial is: %llu\n", f);
    } else {
        long double approx = fact_approx(fact_n);
        printf("Factorial of %d is too big for unsigned long long; approx = %.0Lf\n", fact_n, approx);
    }
    //--------------------------------------------------------------------
    printf("The sum of digits of 764 is %d\n", sum_of_digits(764));
    //--------------------------------------------------------------------
    printf("Enter 5 numbers to check prime:\n");
    for (int i = 0; i < sizeOfprime; i++)
    {
        if (scanf("%d", &n[i]) != 1) { n[i] = 0; }
        prime(n[i]);
    }
    //--------------------------------------------------------------------
    printf("Average of 3, 9, 5 is: %6f\n", average(3, 9, 5));
    even_odd(19);
    //--------------------------------------------------------------------
    printf("Enter a number to print square: ");
    if (scanf("%d", &nasterics) != 1) nasterics = 0;
    chracter(nasterics);
    //--------------------------------------------------------------------
    printf("Enter a 3-digit number: ");
    if (scanf("%d", &number) != 1) number = 0;
    reverse_number(number);
    //--------------------------------------------------------------------
    even_odd(46);
    //--------------------------------------------------------------------
    printf("Enter a number to print square: ");
    if (scanf("%d", &nasterics) != 1) nasterics = 0;
    chracter(nasterics);
    //--------------------------------------------------------------------
    printf("Average of 6, 9, 7 is: %6f\n", average(6, 9, 7));
    printf("Average of 3, 67, 5 is: %6f\n", average(3, 67, 5));
    //--------------------------------------------------------------------
    printf("Enter number of items (max 20): ");
    if (scanf("%d", &nitems) != 1) nitems = 0;

    if (nitems <= 20 && nitems >= 0)
    {
        billing_system(nitems);
    }
    else
    {
        printf("Sorry\nYou entered items more than 20\nProgramme ends here\nThanks for using programme\n");
    }
    //--------------------------------------------------------------------
    printf("\n<-----Welcome to use simple calculator----->\n");
    printf("Do you want to use my calculator? (yes=y or no=n): ");
    if (scanf(" %c", &choicee) != 1) choicee = 'n';

    if (choicee == 'y' || choicee == 'Y')
    {
        do
        {
            printf("Enter your choice (1=add, 2=sub, 3=multiply, 4=division): ");
            if (scanf("%d", &choice) != 1) choice = 0;

            if (choice < 1 || choice > 4)
            {
                printf("Invalid choice. Exiting calculator.\n");
                break;
            }

            printf("Enter a: ");
            if (scanf("%lf", &a) != 1) a = 0.0;
            printf("Enter b: ");
            if (scanf("%lf", &b) != 1) b = 0.0;

            switch (choice)
            {
                case 1: printf("Result: %g\n", add(a, b)); break;
                case 2: printf("Result: %g\n", sub(a, b)); break;
                case 3: printf("Result: %g\n", mul(a, b)); break;
                case 4:
                    if (b == 0.0)
                        printf("Division by zero error\n");
                    else
                        printf("Result: %g\n", division(a, b));
                    break;
            }

            printf("Do you want to continue calculator? (1=Yes, 0=No): ");
            if (scanf("%d", &more_run) != 1) more_run = 0;
        } while (more_run == 1);
    }
    //--------------------------------------------------------------------
    int c, d;
    printf("Enter two numbers for power (a^b): ");
    if (scanf("%d %d", &c, &d) != 2) { c = 0; d = 0; }
    printf("%lu\n", integerpower((unsigned long int)c, (unsigned long int)d));

    int e, f;
    printf("\nEnter 2 numbers to check if second is multiple of first: ");
    if (scanf("%d %d", &e, &f) != 2) { e = 0; f = 0; }
    checkmultiple(e, f);

    float g, h, i;
    printf("\nEnter 3 numbers to find smallest: ");
    if (scanf("%f %f %f", &g, &h, &i) != 3) { g = h = i = 0.0f; }
    smallest(g, h, i);

    six_sided(6000000u);

    return 0;
}

// Function implementations
void sum(int n) { int s=0; for(int i=1;i<=n;i++) s+=i; printf("Sum from 1 to %d: %d\n", n, s); }

unsigned long long fact_int_safe(int n)
{
    if (n < 0 || n > 20) return 0ULL;
    unsigned long long f=1; for(int i=1;i<=n;i++) f*=i; return f;
}

long double fact_approx(int n) { return tgammal((long double)n + 1.0L); }

int sum_of_digits(int n) { if(n<0)n=-n; int sum=0; while(n>0){sum+=n%10;n/=10;} return sum; }

void prime(int n)
{
    if (n<=1){printf("%d is Not a prime number\n", n); return;}
    int is_prime=1;
    for(int i=2;i<=sqrt(n);i++){if(n%i==0){is_prime=0;break;}}
    printf("%d is %sprime number\n", n, is_prime?"a ":"Not a ");
}

float average(int a,int b,int c){return (a+b+c)/3.0f;}

void even_odd(int n){printf("%d is %s number\n", n, (n%2==0)?"Even":"Odd");}

void chracter(int n){for(int i=0;i<n;i++){for(int j=0;j<n;j++) printf("*"); printf("\n");}}

void reverse_number(int number){long long n=number, rev=0; int sign=(n<0)?-1:1; if(n<0)n=-n; while(n>0){rev=rev*10+n%10;n/=10;} printf("Reverse is: %lld\n", rev*sign); }

void billing_system(int nitems)
{
    char item[64]; int qty,ppr; float total=0, discount=0, tax=1;
    for(int i=0;i<nitems;i++){
        printf("\nEnter name: "); scanf("%63s", item);
        printf("Enter quantity: "); scanf("%d",&qty);
        printf("Enter price per unit: "); scanf("%d",&ppr);
        printf("Total for %s: %d\n", item, qty*ppr);
        total+=qty*ppr;
    }
    if(total>5000) discount=0.1f*total;
    printf("Total Excl GST: %.2f\nFBR POS Service: %.2f\nDiscount: %.2f\nNet payable: %.2f\n", total, tax, discount, total+tax-discount);
}

double add(double a,double b){return a+b;}
double sub(double a,double b){return a-b;}
double mul(double a,double b){return a*b;}
double division(double a,double b){return a/b;}

unsigned long int integerpower(unsigned long int a,unsigned long int b){unsigned long int r=1; for(unsigned long int i=0;i<b;i++) r*=a; return r;}

void checkmultiple(int a,int b){if(a==0)printf("0(False)"); else printf("%s",(b%a==0)?"1(true)":"0(False)");}

void smallest(float a,float b,float c){float s=a; if(b<s)s=b; if(c<s)s=c; printf("%f is the smallest number\n", s); }

void six_sided(unsigned int rolls)
{
    if(rolls==0) rolls=6000000u;
    unsigned int f[7]={0}; // f[1]..f[6]
    for(unsigned int i=0;i<rolls;i++){f[1+rand()%6]++;}
    for(int j=1;j<=6;j++) printf("%d appears %u times\n", j, f[j]);
    unsigned int sum=0; for(int j=1;j<=6;j++) sum+=f[j]; printf("Total number of rolls: %u\n", sum);
}
