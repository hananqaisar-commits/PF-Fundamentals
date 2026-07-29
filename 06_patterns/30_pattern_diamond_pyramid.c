// Pattern 06 - Full Diamond / Pyramid (Centered)
// Output (n=4):
//          *
//         ***
//        *****
//       *******

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

        // left half + tip
        for (int k = 0; k < i + 1; k++)
            printf("*");

        // right half
        for (int m = i; m > 0; m--)
            printf("*");

        printf("\n");
    }

    return 0;
}
