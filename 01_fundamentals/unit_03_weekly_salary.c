#include <stdio.h>
int main(){
float fix_salary=200.0,total_sales_week,commision,total_salary=0.0;
printf("Enter sales of week in dollars:"); scanf("%f",&total_sales_week);
while (total_sales_week!=-1) { commision=(9.0/100.0)*total_sales_week; total_salary=fix_salary+commision; printf("Salary is: %f\n",total_salary); printf("Enter sales of week in dollars:"); scanf("%f",&total_sales_week); }
return 0;
}
