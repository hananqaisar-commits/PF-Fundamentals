// Program - Star Bar Chart (5 numbers, prints stars equal to input)
// Output: prints * for each unit of input value

#include<stdio.h>
int main(){

    int n, i;

    printf("Enter any 5 numbers (1-30): ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
