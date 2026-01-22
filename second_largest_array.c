#include <stdio.h>
int main()
{
    int largest = -12783194;
    int second_largest;
    int array[6] = {5, 4, 3, 2, 1, 0};

    for (int i = 0; i < 6; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            if (array[i] < largest && array[i] != largest)
            {
                second_largest = largest;
            }
        }
    }
    printf("Largest: %d\n", largest);
    printf("Second largest: %d", second_largest);

    return 0;
}