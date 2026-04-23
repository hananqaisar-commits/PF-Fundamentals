// Program 12 - Sum of Even Numbers (2 to 30)
// Output: Sum = 240

#include<stdio.h>
int main(){

    int sum = 0;

    for (int i = 2; i <= 30; i += 2)
    {
        sum += i;
    }

    printf("Sum of even numbers from 2 to 30 is: %d", sum);

    return 0;
}
