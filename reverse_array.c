#include <stdio.h>
#include <string.h>
int reverse(int arr[], int start, int end, int size);
int reverse_recursion(int arr[], int start, int end, int size);
void reverse_char(char arr[],int start, int end);

int main()
{
        int size1,size2;
        printf("Enter an array:");
        scanf("%d", &size1);
        int arr1[size1];
         for (int i = 0; i < size1; i++)
        {
                scanf("%d", &arr1[i]);
        }
         

        printf("Enter an array:");
        scanf("%d", &size2);
       
        int arr2[size2];

        for (int i = 0; i < size2; i++)
        {
                scanf("%d", &arr2[i]);
        }
        int start, end;

        reverse(arr1, 0, size1 - 1, size1);
        reverse_recursion(arr2 , 0 , size2 - 1, size2);

        int len;
        char num[1000];
       
        printf("Enter string in programme:");
        scanf("%s",num);
       
         len=strlen(num);
       
        reverse_char(num,0,len-1);
        printf("Reverse string is:%s",num);

        return 0;
}
//function definition--------------------------------------------------------
int reverse(int arr[], int start, int end, int size)
{

        while (start < end)
        {
                int temp = 0;
                temp = arr[start];//this swapping swap the first element with the last element
                arr[start] = arr[end];
                arr[end] = temp;
                start++;//now our starting element is move to 2 element
                end--;//now from our last element the 2 last element is target 
        }
        printf("reverse array is:{");
        for (int i = 0; i < size; i++)
        {
                printf("%d,", arr[i]);
        }
        printf("\b}\n");
}
int reverse_recursion(int arr[], int start, int end, int size){

if (start>end) return 0;//Base case of my recursion when it true then my recursion would stop


        int temp =0;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;



 reverse_recursion(arr,start+1,end-1,size);

{   

     printf("reverse array is:{");
        for (int i = 0; i < size; i++)
        {
                printf("%d,", arr[i]);
        }
        printf("\b}\n");
}
//-----------------------------------------------------------------------------------------
}
void reverse_char(char arr[],int start, int end){

        if (start>=end)//base case
        {
                return ;
        }
        
        if (start<=end)
        {
                int temp=0;
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
        }
       
       
        
       return reverse_char(arr,start+1,end-1);
        
        

}