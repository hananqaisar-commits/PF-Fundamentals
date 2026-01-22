#include<stdio.h>
#include<math.h>
int swap(int a , int b);
int _swap(int *a , int* b);


int main(){
int Swap;
int a,e;
int b,c;
   printf("Enter any no a:");
   scanf("%d",&a);

   printf("Enter any no b:");
   scanf("%d",&b);
   
   printf(swap(a,b));

    return 0;
}
int swap(int a , int b){
   int c=b;
   b=a;
   a=c;
}
int _swap(int *a , int *b ){
    int c=*b;
    *b = *a;
    *a = *c;
}