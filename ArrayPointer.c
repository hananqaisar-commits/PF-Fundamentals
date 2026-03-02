#include <stdio.h>

int largestElement(int *array)
{
    int largest = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    return largest;
}
int main()
{
    int array1[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array1[i]);
    }

    int hold;
    hold = largestElement(array1);

    printf("Largest element: %d", hold);
    return 0;
}