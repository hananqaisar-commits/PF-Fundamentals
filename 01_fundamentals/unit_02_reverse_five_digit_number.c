#include<stdio.h>
int main(){
int number;
int a;
int b;
int c;
int d;
int e;
int Ra;
int Rb;
int Rc;
int Rd;
int Re;
printf("Enter any number of 5 digits:");
scanf("%d",&number);
a=number/10;
Ra=number%10;
b=a/10;
Rb=a%10;
c=b/10;
Rc=b%10;
d=c/10;
Rd=c%10;
e=d;
printf("%d\t%d\t%d\t%d\t%d",e,Rd,Rc,Rb,Ra);
return 0;
}
