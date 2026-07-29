// Program 16 - Fuel Efficiency Calculator (Miles per Gallon)
// Enter -1 to stop, then prints average MPG

#include<stdio.h>
int main(){

    float gallons, miles;
    float miles_per_gallon;
    float total_miles = 0;
    float total_gallons = 0;

    printf("Enter gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while (gallons != -1)
    {
        printf("Enter miles driven: ");
        scanf("%f", &miles);

        miles_per_gallon = miles / gallons;
        printf("Miles/Gallon for this tank: %.2f\n", miles_per_gallon);

        total_gallons += gallons;
        total_miles   += miles;

        printf("Enter gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }

    if (total_gallons != 0)
        printf("Overall Average MPG: %.2f", total_miles / total_gallons);

    return 0;
}
