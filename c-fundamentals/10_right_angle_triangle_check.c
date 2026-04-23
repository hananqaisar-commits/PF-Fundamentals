// Program 10 - Right Angle Triangle Check (Pythagorean Theorem)
// Output: "Yes triangle can be formed" or "No"

#include<stdio.h>
#include<math.h>

int main(){

    float base, hypo, perp;

    printf("Enter Perpendicular: ");
    scanf("%f", &perp);

    printf("Enter Base: ");
    scanf("%f", &base);

    printf("Enter Hypotenuse: ");
    scanf("%f", &hypo);

    // Pythagoras: hypo^2 = perp^2 + base^2
    if (pow(hypo, 2) == pow(perp, 2) + pow(base, 2))
        printf("Yes, right angle triangle can be formed");
    else
        printf("No, it can't form a right angle triangle");

    return 0;
}
