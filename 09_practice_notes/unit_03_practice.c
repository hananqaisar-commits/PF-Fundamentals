

// #include<stdio.h>
// int main(){

//     int a,b,c;

    
//         printf("Enter side of triangle: ");
//         scanf("%d",&a);
       
//         printf("Enter side of triangle: ");
//         scanf("%d",&b);
        
//         printf("Enter side of triangle: ");
//         scanf("%d",&c);

//         if (a+b>c)             //or  i can write a+b>c && a+c>b && b+c>a
//         {
//             if (a+c>b)
//             {
//                 if (b+c>a)
//                 {
//                     printf("Yes these sides can form triangle");
//                 }
//                 else
//                     printf("No these cannot form triangle");
//             }
            
//         }
        

//     return 0;
// }




// #include<stdio.h>
// #include<math.h>

// int main(){

//     float base,hypo,perp;

// printf("Enter Perpendicular:");
// scanf("%d",&perp);

// printf("Enter Base:");
// scanf("%d",&base);

// printf("Enter Hypotenuse:");
// scanf("%d",&hypo);

// if ((pow(hypo,2))==pow(perp,2)+(pow(base,2)))
// {
//     printf("Yes triangle can formed");
// }
// else{
//     printf("No it can't form triangle");
// }


//     return 0;
// }





// #include<stdio.h>
// int main(){

//     unsigned long long fact=1;
//     int n;


//     printf("Enter number to print factorial:");
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         fact=fact*i;
//     }
    
// printf("Your factorial answer is:%lld",fact);

//     return 0;
// }





// #include<stdio.h>
// int main(){

// for (int i = 0; i < 5; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }


//     return 0;
// }






// #include <stdio.h>

// int main (){
// for ( int i= 0; i < 5; i++)
// {
//     for (int j= i; j < 5; j++)
//     {
//         printf("*");
//     }
    
//     printf("\n");
// }


// }
  




// #include <stdio.h>
// int main (){

// printf("hello,\n\t This is my first program");

//   return 0;
// }




// #include <stdio.h>
// int main (){

//  for (int i=0 ; i<5; i++)
//  {
//  for (int j =0 ; j<i+1; j++ ){

//    printf ("*");

//  }
//    printf ("\n");


//   }
//      return 0;
// }



// #include <stdio.h>
// int main (){

//     int isprime=1;
//     int n;

//     printf("Enter number to check prime or not:");
//     scanf("%d",&n);

//     if (n<=1)
//     {
//         printf("Not a prime number");
//     }
//     else{
//          for (int i = 2; i <= n/2; i++)
//          {
//             if (n%i==0)
//             {
//             isprime=0;//mean if ans is 0 it mean divisior is found so, it is not prime
//             break;
//             }

//          }
         
//     if (isprime==1)
//     {
//         printf("Prime number");
//     }
//     else{
//         printf("Not a prime number");
//     }
        
//     }
//         return 0;  
//     }

  


// #include <stdio.h>

// int main(){

// float gallons;
// float miles;
// float miles_gallons;
// float total_miles=0;
// float total_gallons=0;

// printf("Enter the gallons used(-1 to end):");
// scanf("%f",&gallons);

// while (gallons!=-1) //if user enter -1 then programmes end
// {

// printf("Enter the miles driven:");
// scanf("%f",&miles);// ab gallon agar -1 nai hai to ham miles enter karein ga taka calculation karein

//     miles_gallons=miles/gallons;

//     printf("Miles/Gallons for this tank was: %f\n",miles_gallons);

//     total_gallons=total_gallons+gallons;
//     total_miles=total_miles+miles;

// printf("Enter the gallons used(-1 to end):");
// scanf("%f",&gallons); //is lia bcz programme mei dekha jaye ke ab nxt loop gallon kya hogi
// }
// if (total_gallons!=0)
// {
//     printf("Average of combined is:%f",total_miles/total_gallons);
// }

//     return 0;

// }


// 3.18

// #include <stdio.h>
// int main(){

//     float fix_salary=200.0;
//     float total_sales_week;
//     float commision;
//     float total_salary=0.0;

//     printf("Enter sales of week in dollars:");
//     scanf("%f",&total_sales_week);

   

//     while (total_sales_week!=-1)
//     {
//          commision=(9.0/100.0)*total_sales_week;
//         total_salary=fix_salary+commision;

//         printf("Salary is: %f\n",total_salary);

//          printf("Enter sales of week in dollars:");
//          scanf("%f",&total_sales_week);
//     }
    

//     return 0;
// }



// #include <stdio.h>
// int main(){

//     float principle;
//     float rate;
//     int days;
//     float intrest;

//     printf("Enter loan principle (-1 to end): ");
//     scanf("%f",&principle);

//     while (principle!=-1)
//     {
//         printf("Enter intrest rate: ");
//         scanf("%f",&rate);

//         printf("Enter term of loam in days: ");
//         scanf("%d",&days);

//           intrest=(principle*rate*days)/365;

//     printf("Your intrest charges on %f is $%f\n",principle,intrest);


//     printf("Enter loan principle (-1 to end): ");
//     scanf("%f",&principle);
//     }
    

//     return 0;
// }



// #include <stdio.h>
// int main(){

// int i=1;
// int n=10;


//     while (i<=n)
//     {
//         printf("%d   ",i);
//         i++;
//     }
    
//     return 0;

// }



// #include <stdio.h>
// int main(){
// int max_user;
// int id;
// int hours;
// float hourly_wage;
// float pay;
// int extra;
// float highest=1;
// float lowest=0;
// int san;
// int first=1;

// printf("ID\tHours Worked\twage\tTotal pay\n");
// do
// {
//     printf("How many user you want to print(max=20):");
//     scanf("%d",&max_user);

//     for (int i = 0; i < max_user; i++)
//     {
//         printf("\nEnter Employee ID:");
//         scanf("%d",&id);
//         printf("Enter hours worked:");
//         scanf("%d",&hours);
//         printf("Enter hourly wage:");
//         scanf("%f",&hourly_wage);

            
// if (hours<=40)
// {
//     pay=(hours*hourly_wage);
// }
// else{
//     pay= (40*hourly_wage)+((hours-40)*hourly_wage*1.5);
// }


// printf("%d\t%d\t%f\t%f\n",id,hours,hourly_wage,pay);
   
// if (first)
// {
//     highest = lowest = pay;
//     first = 0;
// }
// else{
   
//     if (pay > highest)
//     {
//          highest = pay;
//     } 
//     if (pay < lowest)
//     {
//         lowest = pay;
//     }
    

    
// }
// }


// printf("Highet pay of this batch is %.2f\n",highest);

// printf("lowest pay of this batch is %.2f\n",lowest);

//    printf("Do you want to progress another batch? (1=yes ,0=No):");
//    scanf("%d",&san);

//    first=1;//reset for nxt loop
// } while (san!=0);



//     return 0;
// }




// #include <stdio.h>
// int main (){
//     int number;
// printf("Enter number:");
// scanf("%d",&number);

//     for (int i = 1; i <= number; i++){
//         for (int j = 1; j <= number; j++)
//         {
            
//             if (i==1||i==number || j==1||j==number) {
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
   
//         }
//           printf("\n");
//     }

//     return 0;

// }





// #include <stdio.h>
// int main (){   
//     int number;
//      printf("enter a number");    
    
//     scanf("%d",& number);
//     for (int i = 0; i <=; i++){
    
//     for (int j = 0; j <=; i++);
//     }

//     return 0;
// }
