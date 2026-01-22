#include <stdio.h>
void ptralpha(char *a,char *z);
void reverse(int *ptrarray,int size,int *start,int *end);

int main(){

  

    char a='a';
    char z='z';


    // printf("a=%d and z=%d\n",a,z);

    ptralpha(&a,&z);

    int array[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof array/sizeof (int);//it will give me size of array
    int *start=&array[0];
    int *end=&array[size-1];
    reverse(array,size,start,end);
    puts("");
    printf("Your array is :{");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",array[i]);
    }
    printf("\b}\n");
    
    return 0;
}
void ptralpha(char *a,char *z){

    for (int i = *a ; i <= *z; i++)
    {
        printf("%c ",i);
    }

}
void reverse(int *ptrarray,int size,int *start,int *end){

    while (start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    
     
}