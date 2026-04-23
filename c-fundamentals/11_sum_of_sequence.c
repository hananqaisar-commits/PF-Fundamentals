// Program 11 - Sum of a Sequence of Integers
// First input: how many numbers to enter
// Output: their total sum

#include<stdio.h>
int main(){

    int read, n;
    int sum = 0;

    printf("How many numbers do you want to sum: ");
    scanf("%d", &read);

    for (int i = 0; i < read; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        sum += n;
    }

    printf("\nSum is: %d", sum);

    return 0;
}
