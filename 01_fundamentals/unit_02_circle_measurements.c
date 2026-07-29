#include<stdio.h>
int main(){
float radius;
float pi=3.14159;
float circum;
float diam;
printf("Enter radius:");
scanf("%f",&radius);
circum= 2*(pi*radius);
diam=2*radius;
printf("Circumfernce of circle is:%f\n",circum);
printf("Diameter of circle is:%f\n",diam);
return 0;
}
