#include <stdio.h>
#include <math.h>
int main()
{
    float base, hypo, perp;
    printf("Enter Perpendicular:");
    scanf("%d", &perp);
    printf("Enter Base:");
    scanf("%d", &base);
    printf("Enter Hypotenuse:");
    scanf("%d", &hypo);
    if ((pow(hypo, 2)) == pow(perp, 2) + (pow(base, 2)))
        printf("Yes triangle can formed");
    else
        printf("No it can't form triangle");
    return 0;
}
