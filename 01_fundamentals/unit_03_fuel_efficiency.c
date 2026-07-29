#include <stdio.h>
int main()
{
    float gallons, miles, miles_gallons, total_miles = 0, total_gallons = 0;
    printf("Enter the gallons used(-1 to end):");
    scanf("%f", &gallons);
    while (gallons != -1)
    {
        printf("Enter the miles driven:");
        scanf("%f", &miles);
        miles_gallons = miles / gallons;
        printf("Miles/Gallons for this tank was: %f\n", miles_gallons);
        total_gallons += gallons;
        total_miles += miles;
        printf("Enter the gallons used(-1 to end):");
        scanf("%f", &gallons);
    }
    if (total_gallons != 0)
        printf("Average of combined is:%f", total_miles / total_gallons);
    return 0;
}
