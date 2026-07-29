// Pattern 07 - Full Diamond (Top + Bottom)
// Output (n=5):
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main(){

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    // Top half (growing)
    for (int i = 1; i <= number; i++)
    {
        for (int j = number; j > i; j--)
            printf(" ");
        for (int k = 0; k < (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    // Bottom half (shrinking)
    for (int i = number; i >= 1; i--)
    {
        for (int j = i; j <= number; j++)
            printf(" ");
        for (int k = 0; k < (2 * i - 3); k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
