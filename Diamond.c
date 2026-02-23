//
//#include <stdio.h>
//int main(){
//
//int number;
//
//printf("Enter any number:");
//scanf("%d",&number);
//
//for(int i=1;i<=number; i++){
//    for(int j=number; j>i; j--){
//        printf(" ");
//    }
//    for(int k=0; k<(2*i-1); k++){
//        printf("*");
//    }
//    printf("\n");
//}
//for(int i=number;i>=1; i--){
//    for(int j=i; j<=number; j++){
//        printf(" ");
//    }
//    for(int k=0; k<(2*i-3); k++){
//        printf("*");
//    }
//    printf("\n");
//
//
//}
// return 0;
//}


//#include <stdio.h>
//int main(){
//
// int first=1;
// float highest,lowest;
// int sales,n,a;
//printf("Enter salesman:");
//scanf("%d",&a);
//
// for(int i=1;i<=a;i++){
// printf("Enter sale of %d salesman:",i);
// scanf("%d",&sales);
//
// if(first){
//    highest=lowest=sales;
//    first=0;
// }
// else{
//    if(sales>highest){
//        highest=sales;
//    }
//    if(sales<lowest){
//        lowest=sales;
//    }
// }
//
// }
// printf("\nHighest sales is:%.2f and he is the winner of the CONTEST\n" ,highest);
// printf("Lowest sales is:%.2f",lowest);
//
//
// first=1;
//return 0;
//}







//#include<stdio.h>
//int main(){
//
//int a,b,c;
//
//for(a=1;a<=500;a++){
//    for(b=a;b<=500;b++){
//        for(c=b;c<=500;c++){
//                if(a*a + b*b == c*c){
//            printf("%d + %d = %d\n",a,b,c);
//          }
//       }
//    }
//}
//return 0;
//}

//#include<stdio.h>
//int main(){
//
//int salary,hours,count,employee,total_salary,santval,tax;
//char name;
//int gross=0;
//int net=0;
//int allmoney=0;
//
//printf("How many employee you want to enter:");
//scanf("%d",&count);
//
//do{
//
//    for(int i=0; i<count; i++){
//
//        printf("Enter Employee name:");
//        scanf("%s",&name);
//        printf("Enter Basic salary:") ;
//        scanf("%d",&salary);
//        printf("Enter working hours:");
//        scanf("%d",&hours);
//
//        if(hours>40){
//            total_salary=salary+((hours-40)*200);
//        }
//        if(hours<=40){
//
//            total_salary=salary;
//        }
//
//        gross=gross+total_salary;
//
//        if(gross>50000){
//
//            tax=0.1*gross;
//        }
//
//        else{
//
//            tax=0.05*gross;
//        }
//
//        net=gross-tax;
//
//        printf("Employee name is:%c\n",name);
//        printf("Employee gross salary is:%d\n",gross);
//        printf("Tax deducted is:%d\n",tax);
//        printf("Net pay is:%d\n",net);
//
//        allmoney=allmoney+net;
//
//
//    }
//
//    printf("Total amount given to employees is %d\n",allmoney);
//
//      printf("Do you want to add more employees(1=yes, 0=no):");
//        scanf("%d",&santval);
//
//}while(santval!=0);
//
//
//return 0;
//
//}
