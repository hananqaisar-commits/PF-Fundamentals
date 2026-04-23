// Program 06 - Circle: Diameter and Circumference
// Output Example: radius=7 → Circumference=43.98, Diameter=14.00

#include<stdio.h>
int main(){

    float radius;
    float pi = 3.14159;
    float circum;
    float diam;

    printf("Enter radius: ");
    scanf("%f", &radius);

    circum = 2 * (pi * radius);
    diam = 2 * radius;

    printf("Circumference of circle is: %f\n", circum);
    printf("Diameter of circle is: %f\n", diam);

    return 0;
}
