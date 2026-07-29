#include<stdio.h>
int main(){
int size;
int frequency[100]={0};
printf("Enter size of array:");
scanf("%d",&size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    int result;
    for (int i = 0; i < size; i++)
    {
        frequency[array[i]]++;       
        
    }
    int printed[1000];//this array will used for checking below
    printf("In your array:\n");
    for (int i = 0; i < size; i++)
    {
        if (!printed[i])//not printed...it mean if the index of array is not printed before then condition will true and code execute
        {
            printf("%d appears %d times\n",array[i],frequency[array[i]]);
            printed[i]=1;//now that index of array is printed it will not printed again due to my condition
        }
    }
    
    
    return 0;
}