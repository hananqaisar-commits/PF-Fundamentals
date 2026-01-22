//  Write a function to find sum of digits of a number

#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b,c;
    printf("Enter First no:");
    scanf("%d",&a);
    printf("Enter Second no:");
    scanf("%d",&b);

 printf("%d is the total sum.",sum(a,b));

 scanf("%d",&c);
}

int sum(int a,int b){
    return a+b;
}