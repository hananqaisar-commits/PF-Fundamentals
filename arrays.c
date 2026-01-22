#include <stdio.h>
#define SIZE 20
//Functions prototype
void array2d(int row[][4]);
void sort_array(int array[]);
int binary_search(int array[],int key);
//main function
int main(){
int size1;
int size2;
int size3;
int i1=0;
int i2=0;
int array_2d[3][4];


int array1[4];//this initilize array of 4
int array2[3]={0};//thos initilize the array of 10 and all are assings 0
int array3[]={2,4,6,8,9,4};//this initilize the array of automatic size 6 bcz i can't specify the size of array
int array4[4]={2,4,3,5};//this is fized size array of 4


//This gives the total size in bytes of the array array1.
size1=sizeof array1/ sizeof(int);
size2=sizeof array2/sizeof (int);
size3=sizeof array3/sizeof (int);
//printing the size of array to check

printf("Size of array 1 is: %d\n",size1);
printf("Size of array 2 is: %d\n",size2);
printf("Size of array 3 is: %d\n",size3);
for (int i = 0; i < size1 ; i++)
{
    printf("Enter a number at %d index:",i);
    scanf("%d",&array1[i]);
    printf("Index %d is = %d\n",i,array1[i]);
}
for (int i = 0; i < size2 ; i++)
{
    scanf("%d",&array2[i]);
    printf("Array at index %d is = %d\n",i,array2[i]);
}

printf("\n------------------------------\n");
    for (int i = 0; i < size3; i++)
    {
       printf("Array at index %d is = %d\n",i,array3[i]);
    }
    
   

    printf("Array at index %d is = %d\n",i2,array4[i2]);
    i2++;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&array_2d[i][j]);
        }
        
    }
    array2d(array_2d);

    int number[SIZE];
    printf("Enter array elements of %d size: ",SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&number[i]);
    }

    //sorting function header 
    sort_array(number);
    
    int number2;
    printf("Enter key to find:");
    scanf("%d",&number2);
    binary_search(number,number2);

    return 0;

}

void array2d(int row[][4]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",row[i][j]);
        }
        printf("\n");
    }
    
}

void sort_array(int array[]){

    int temp;
     for (int i = 0; i < SIZE; i++)
     {
        for (int j = 0; j < SIZE-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
             
        }
        
       
     }
      printf("Sorted array is :{");
        for (int k = 0; k < SIZE; k++)
        {
            printf("%d,",array[k]);
        }
        printf("\b}\n");
}

int binary_search(int array[],int key){

    int low=0;
    int high=SIZE-1;
    
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (array[mid]==key)
        {
            return 1;
        }
        else if(array[mid]<key){
            low=mid+1;
            
           return 1;
        }
        else if(array[mid]>key){
            high=mid-1;
            
            return 1;
        }
        else
            return 0;
    }
    
    
}