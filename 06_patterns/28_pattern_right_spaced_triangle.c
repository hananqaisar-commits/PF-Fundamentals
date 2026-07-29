// Pattern 04 - Right Aligned Spaced Star Triangle
// Output (n=4):
//      * 
//     * *
//    * * *
//   * * * *

#include<stdio.h>
int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = i; j < n + 1; j++)
            printf(" ");

        // stars with spaces
        for (int k = 0; k < i + 1; k++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
