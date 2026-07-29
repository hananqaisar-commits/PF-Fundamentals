// write a c programme that sum the sequence of integers the first input tell us how many numbers
//  is entered and then print their final sum

// #include<stdio.h>
// int main (){

// int read,n;
// int sum=0;

// scanf("%d",&read);

// for (int i = 0; i < read; i++)
// {
//     scanf(" %d",&n);
//     sum+=n;
// }

// printf("\nSum is:%d",sum);

//     return 0;
// }




// #include<stdio.h>
// int main(){

//     int n=2;
//    int sum=0;

// for (int i = n; i <= 30; i+=2)
// {
//    sum+=i;

// }

// printf("Sum of even number from 2 to 30 is:%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int n=1;
//    int product=1;

// for (int i = n; i <= 15; i+=2)
// {
//    product*=i;

// }

// printf("Product of odd number from 1 to 15 is:%d",product);

//     return 0;

// }




// #include<stdio.h>
// int main(){

//     unsigned long long int fact = 1;
//    int sum=0;
//    int n;

//    printf("Enter any number to print factorial:");
//    scanf("%d",&n);

// for (int i = 1; i <= n; i++)
// {

//     fact=fact*i;

// }

// printf("Factorial is:%d",fact);

//     return 0;

// }




// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     float amount;             // a is total amount deposited at the n number of year
//     float principal = 1000.0; // p is the total amount invested/deposited
//     int n = 10;               // n is the year mean when n is 1 it mean 1st year
//     float rate=0.05;

//     int i;

//     for (int i = 1; i <= 10; i++) // for 10 number of lines
//     {
//         amount = principal * pow(1 + (rate/100.0), i);
//             printf("%4d %6.2f\n", i, amount);
//          }

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     float amount;             // a is total amount deposited at the n number of year
//     float principal = 1000.0; // p is the total amount invested/deposited
//     int n = 10;               // n is the year mean when n is 1 it mean 1st year
//     float rate;

//     int i;

//     for (int i = 1; i <= 10; i++) // for 10 number of lines
//     {

//         for (rate  = 5; rate <= 10; rate++) // for 10 numbers in each line
//         {

//             amount = principal * pow(1 + (rate/100), i);
//             printf("%4d %6.2f ", i, amount);
//         }

//         printf("\n");
//     }

//     return 0;
// }




// #include <stdio.h>
// int main()
// {

//     int account_number;
//     int old_credit_limit;
//     int new_credit_limit;
//     int current_balance;
//     int used_balance;
//     int remaining_limit;

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter your Account number:");
//         scanf("%d", &account_number);

//         printf("Enter your old credit Limit:");
//         scanf("%d", &old_credit_limit);

//         printf("Enter current blance of you account:");
//         scanf("%d", &current_balance);

//         new_credit_limit = old_credit_limit / 2;

//         printf("Your new credit limit is:%d\n", new_credit_limit);

//         printf("Enter the amount you used:");
//         scanf("%d", &used_balance);

//         remaining_limit = new_credit_limit - used_balance;

//         if (used_balance > new_credit_limit)
//         {
//             if (used_balance > current_balance)
//             {
//                 printf("You balance is not enough\n");
//             }
//             else
//                 printf("You exceed your credit limit amount\n");
//         }
//         else
//         {
//             printf("Your remaing limit is:%d\n", remaining_limit);
//         }
//     }

//     return 0;
// }






// 4.18
// #include <stdio.h>
// int main()
// {

//     int n, i;

//     printf("Enter any 5 numbers (1-30):");

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &n);
//         for (int j = 0; j < n; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }



 
//      *
//     * *
//    * * *
//   * * * *
// #include <stdio.h>
// int main(){
//     int n;

//     printf("Enter any number:");
//     scanf("%d",&n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n+1; j++)
//         {
//             printf(" ");
//         }

//         for (int k = 0; k < i+1 ; k++)
//         {
//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }






//      *
//     **
//    ***
//   ****

// #include <stdio.h>
//          int main()
// {
//     int n;
//     printf("Enter any number:");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n + 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < i + 1; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }






//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************

// #include <stdio.h>
//          int main()
// {
//     int n;
//     printf("Enter any number:");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n + 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < i + 1; k++)
//         {
//             printf("*");
//         }
        
//         for (int m = i; m > 0; m--)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>
//          int main()
// {
//     int n;
//     printf("Enter any number:");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n + 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < i + 1; k++)
//         {
//             printf("*");
//         }
        
//         for (int m = i; m > 0; m--)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }




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
    
// printf("Your factorial answer is:%d",fact);

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





//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************


//try  to print this by using while loop

// #include <stdio.h>
// int main (){

//     int n;
//     printf("Enter any number");
//     scanf("%d",&n);

// int i=n;
// while (i<0)
// {
//     int j=i
//     while (j<)
//     {
//         printf(" ");
//         j++;
//     }
//     int k=
//     i++;
// }



//     return 0;
// }


//Billing System 

#include <stdio.h>
int main(){
char item_name[20];
int quantity,ppr;  //--->price per unit
int total[20]={0};
float grand_total=0;
float discount;
float net;
float tax=1.99;
int nitems;

printf("Enter number of items: ");
scanf("%d",&nitems);



for(int i=0;i<nitems;i++){

    

    printf("\nEnter name: ");
    scanf("%s",&item_name);
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    printf("Enter price per unit: ");
    scanf("%d",&ppr);

   

    total[i]=(quantity*ppr);

        printf("Total for %s is: %d\n",item_name,total[i]);
            


 grand_total=tax+grand_total+total[i];
   

    if(grand_total>5000){

        discount=0.1*grand_total;
    }

}

printf("-----------------------------\n");
printf("Tax is %f\n",tax);
printf("Grand Total:%f\n",grand_total);
if(grand_total>5000){

printf("Discount (10%%)=%f\n",discount);

}

net=grand_total-discount;

printf("Net payable amount is= %f\n",net);
printf("------------------------------\n");
printf("Thanks for Shopping ('-')\n");
printf("------------------------------");
}
