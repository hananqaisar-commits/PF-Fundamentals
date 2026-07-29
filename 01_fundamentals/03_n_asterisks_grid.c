// Program 03 - N Asterisks Grid (Each line contains N stars)
// Output (n=3):
// ***
// ***
// ***

#include<stdio.h>
int main(){

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        puts(""); // prints new line
    }

    return 0;
}
