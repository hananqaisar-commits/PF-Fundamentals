#include<stdio.h>
void change_array(int arr1[],int size);
int main(){


    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element:\n",i);
        scanf("%d",&arr1[i]);
    }
    printf("Before changing the array is:");
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr1[i]);

    }
    printf("\b}");
    change_array(arr1,size);

    return 0;
}
void change_array(int arr1[],int size){
    printf("After changing your array is:");
    printf("{");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("\b}");
}
