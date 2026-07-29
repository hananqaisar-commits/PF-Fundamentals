#include<stdio.h>
int main(){
int n;
unsigned long long int fact=1;
int i;
printf("Enter any number to find Factorial:");
scanf("%d",&n);
for (int i = 1; i <= n ; i++)
{
fact=fact*i;
}
printf("Factorial is:%lld",fact);//This is lld(LLd) not 11d(one one d)  lld is format specifier used for unsignes long long int
return 0;
}
