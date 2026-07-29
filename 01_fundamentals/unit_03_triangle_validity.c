#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter side of triangle: ");
    scanf("%d", &a);
    printf("Enter side of triangle: ");
    scanf("%d", &b);
    printf("Enter side of triangle: ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Yes these sides can form triangle");
    else
        printf("No these cannot form triangle");
    return 0;
}
