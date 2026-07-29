#include<stdio.h>
#define MAX1 10
#define MAX2 5
int main(){

    int arr1[MAX1]={1,2,3,4,5,6,7,8,9,3};
    int arr2[MAX2]={1,2,3,4,5};

    int size1,size2;
//size of arrays
    size1=MAX1;
    size2=MAX2;

    int merged[size1+size2];
//assing array1 to merged 1 part
    for (int i = 0; i < size1; i++)
    {
        merged[i]=arr1[i];
    }
    //assing array2 to merged 2 part
    for (int i = 0; i < size2; i++)
    {
        merged[size1+i]=arr2[i];
    }
    
    printf("Merged array is :{");
    for (int i = 0; i < size1+size2; i++)//size1+size2 it mean 10+5=15 
         
        printf("%d,",merged[i]);
    
    printf("\b}\n");

    return 0;

}