#include <stdio.h>
int main(){
int max_user,id,hours,extra,san,first=1; float hourly_wage,pay,highest=1,lowest=0;
printf("ID\tHours Worked\twage\tTotal pay\n");
do { printf("How many user you want to print(max=20):"); scanf("%d",&max_user); for (int i = 0; i < max_user; i++) { printf("\nEnter Employee ID:"); scanf("%d",&id); printf("Enter hours worked:"); scanf("%d",&hours); printf("Enter hourly wage:"); scanf("%f",&hourly_wage); if (hours<=40) pay=hours*hourly_wage; else pay=(40*hourly_wage)+((hours-40)*hourly_wage*1.5); printf("%d\t%d\t%f\t%f\n",id,hours,hourly_wage,pay); if (first) { highest=lowest=pay; first=0; } else { if (pay>highest) highest=pay; if (pay<lowest) lowest=pay; } } printf("Highet pay of this batch is %.2f\n",highest); printf("lowest pay of this batch is %.2f\n",lowest); printf("Do you want to progress another batch? (1=yes ,0=No):"); scanf("%d",&san); first=1; } while (san!=0);
return 0;
}
