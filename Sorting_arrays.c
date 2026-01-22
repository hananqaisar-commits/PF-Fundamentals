#include <stdio.h>
int main()
{

    int size;
    int n1,n2;//n1 for array1 and n2 for array2

    printf("Enter the size of an array:");
    scanf("%d", &size);

    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nYour entered array is:{");
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr1[i]);
    }
    printf("\b}");


int temporaray;//This is bubble sort method
    for (int i = 0; i < size-1; i++)
    {
        for (int y = 0; y < size - i - 1; y++)
        {
            if (arr1[y] > arr1[y + 1])
            {
                temporaray=arr1[y];
                arr1[y]=arr1[y+1];
                arr1[y+1]=temporaray;

            }
        }
    }

    printf("\nAfter sortting the array is:{");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("\b}");

    return 0;
}