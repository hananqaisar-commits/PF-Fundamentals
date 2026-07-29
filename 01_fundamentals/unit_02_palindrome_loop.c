#include<stdio.h>
int main(){
int number;
int reminder;
int reverse=0;
int temp;
int n;
printf("Enter any number of 5 digits:");
scanf("%d",&number);
temp=number;
while (number>0)
{
   reminder=number%10;
   reverse=reverse*10+reminder;
   number=number/10;
}
if (reverse==temp)
{
    printf("Palindrome number");
}
else
    printf("Not a palindrome number");
return 0;
}
