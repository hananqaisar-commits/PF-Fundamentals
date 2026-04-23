// Program 09 - Triangle Validity Check (3 Sides)
// Output: "Yes these sides can form triangle" or "No"

#include<stdio.h>
int main(){

    int a, b, c;

    printf("Enter side 1 of triangle: ");
    scanf("%d", &a);

    printf("Enter side 2 of triangle: ");
    scanf("%d", &b);

    printf("Enter side 3 of triangle: ");
    scanf("%d", &c);

    // A valid triangle: sum of any 2 sides must be greater than 3rd side
    if (a + b > c && a + c > b && b + c > a)
        printf("Yes these sides can form a triangle");
    else
        printf("No, these cannot form a triangle");

    return 0;
}
