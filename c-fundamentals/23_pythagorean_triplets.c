// Program 23 - Pythagorean Triplets (a^2 + b^2 = c^2) up to 500
// Output: 3 + 4 = 5, 5 + 12 = 13 ...

#include<stdio.h>
int main(){

    int a, b, c;

    printf("Pythagorean Triplets (up to 500):\n");

    for (a = 1; a <= 500; a++)
    {
        for (b = a; b <= 500; b++)
        {
            for (c = b; c <= 500; c++)
            {
                if (a*a + b*b == c*c)
                    printf("%d^2 + %d^2 = %d^2\n", a, b, c);
            }
        }
    }

    return 0;
}
