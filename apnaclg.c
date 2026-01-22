#include <stdio.h>
#define SIZE 10

//function prototypes
void odd_find(int arr1[]);
void ascending(int arr1[]);
void most_rpeat(int arr1[]);
int main()
{
    int arr1[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Your Entered Array is: {");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d,", arr1[i]);
    }
    printf("\b}\n");
printf("Answer of (arr1+2) before sorting of an array is: {%d}\n",*(arr1+2));
    //functions calls
    odd_find(arr1);
    ascending(arr1);
printf("Answer of (arr1+2) after sorrting of an array is: {%d}\n",*(arr1+2));//now, the answer is change bcz the array is sorrted
printf("Answer of (arr1+12) is: {%d}. This is garbage value bcz my array is only fix size of 10.\n",*(arr1+12));  //it produce error and gives me garbage value bcz my array size is 10 only
    most_rpeat(arr1);
    return 0;
}

void odd_find(int arr1[])
{
    int count = 0;

    printf("Odd integers in your array: {");
    for (int i = 0; i < SIZE; i++)
    {
        if (arr1[i] % 2 != 0)
        {
            printf("%d,", arr1[i]);
            count++;
        }
    }
    printf("\b}\n");
    printf("Total odd element in your array is: %d\n", count);
}

void ascending(int arr1[])
{
    int temp;

    // Bubble sort method in accending order.....
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    printf("Array in ascending order: {");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d,", arr1[i]);
    }
    printf("\b}\n");
}

void most_rpeat(int arr1[]){

    int freq[SIZE]={0};

    for (int i = 0; i < SIZE; i++)
    {
        ++freq[arr1[i]];
    }
    
    //now to find most repeated 

    int most;
    int max=0;
    for (int i = 0; i < SIZE; i++)
    {
        if (freq[i]>max)
        {
            max=freq[i];

        }
        
    }
    printf("%d appears moset time in your array",max);
}