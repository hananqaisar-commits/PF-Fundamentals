#include<stdio.h>
int main(){
int n;
int temp;
int reverse=0;
int reminder;
printf("Enter number:");
scanf("%d",&n);
temp=n;
while(temp>0){
reminder=temp%10;
reverse=reverse*10+reminder;
temp=temp/10;
}
if (reverse==n)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome");
}
return 0;
}
