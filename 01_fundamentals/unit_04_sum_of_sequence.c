#include <stdio.h>
int main()
{
    int read, n, sum = 0;
    scanf("%d", &read);
    for (int i = 0; i < read; i++)
    {
        scanf(" %d", &n);
        sum += n;
    }
    printf("\nSum is:%d", sum);
    return 0;
}
