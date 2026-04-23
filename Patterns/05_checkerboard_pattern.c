// Program 05 - Checkerboard Pattern (8x8)
// Output:
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
// ...

#include<stdio.h>
int main(){

    for (int i = 1; i <= 8; i++)
    {
        if (i % 2 == 0)
            printf(" "); // space at start of even lines

        for (int j = 1; j <= 8; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
