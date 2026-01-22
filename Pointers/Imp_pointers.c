#include<stdio.h>

void printdo(int a,int b,int *sum,int *prod, int *avg);//prototype


int main (){
int temp;
int a=4;
int b=6;
int sum ,prod ,avg;
  printdo(a,b, &sum, &prod, &avg);
  printf("Sum =%d,    Product =%d,       Average =%d\n ",sum,prod,avg);

  printf("GOOD BYE........");
  scanf("%d",&temp);
    return 0;
}





void printdo(int a,int b,int *sum,int *prod, int *avg){//definition of function
     *sum=a+b;
     *prod=a*b;
     *avg=(a+b)/2;
}