#include <stdio.h>
int main(){
float principle,rate,intrest; int days;
printf("Enter loan principle (-1 to end): "); scanf("%f",&principle);
while (principle!=-1) { printf("Enter intrest rate: "); scanf("%f",&rate); printf("Enter term of loam in days: "); scanf("%d",&days); intrest=(principle*rate*days)/365; printf("Your intrest charges on %f is $%f\n",principle,intrest); printf("Enter loan principle (-1 to end): "); scanf("%f",&principle); }
return 0;
}
