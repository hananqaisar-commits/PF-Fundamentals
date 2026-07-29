#include<stdio.h>

int max(int *a, int *b);
int main(){
    int a;
      int b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
  

int result=max(&a, &b);
printf("%d",result);
    return 0;
}
int max(int *a, int *b){
    if (*a>*b)
    {
      return *a;
    }
    else
    return *b;
}