
// // Factorial

// #include<stdio.h>
// int main(){
// int n;
// unsigned long long int fact=1;
// int i;

// printf("Enter any number to find Factorial:");
// scanf("%d",&n);



//    for (int i = 1; i <= n ; i++)
//    {
//    fact=fact*i;
//    }
   
//    printf("Factorial is:%lld",fact);//This is lld(LLd) not 11d(one one d)  lld is format specifier used for unsignes long long int


//     return 0;
// }




// // prime number check

// #include<stdio.h>
// int main(){

// int n;
// int isprime=1;

// printf("Enter any number to check prime:");
// scanf("%d",&n);
// if(n<2){          //mean if 2 is greater then your input number(e.g:0,1) then prints sorry
//     printf("Sorry\n");
// }
// else{
// for (int i = 2 ; i < n ; i++)
// {
//     if(n%i==0){
//       isprime=0;   //mean divisor is found
// break;       //no need to check more 
//     }
// }
// }

// if(isprime){//isprime is 1 mean true     agar ye isprime jo mei ne upar initilize kiya tha abi tak true hai to wo number phr prime hai is lia print kiya prime number
//     printf("Prime");

// }
// else{
//     printf("Not prime");
// }


//     return 0;
// }







// // n Asterics each line contain n

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter any number:");
//     scanf("%d",&n);

//     for (int i = 1; i <=n; i++)
//     {
//         for (int i = 1; i <=n; i++)
//         {
//             printf("*");
//         }
        
//         puts("");   // we also use this for print new line
//     }
    

//     return 0;
// }



// #include <stdio.h>
// int main(){

// int n;

// printf("enter any number to print Hollow square:");
// scanf("%d",&n);

// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (i==1||i==n || j==1||j==n)
//         {
//             printf("*");
//         }
        
//         else{
//         printf(" ");
//     }
//     }
//     printf("\n");
// }

//     return 0;
// }


// // Checkerboard pattern of asteric

// #include<stdio.h>
// int main(){

// for (int i = 1; i <=8 ; i++)     //this loop print number of lines
// {
//     if (i%2==0) //i am using this if bcz i want to print space in start of even lines
//     {
//         printf(" ");
//     }
    
//    for (int i = 1; i <= 8; i++) //this print number of star in lines
//    {
//     printf("* ");
//    }
//    printf("\n");
// }

//     return 0;
// }







// // calculate diameter and circumference of circle

// #include<stdio.h>
// int main(){

// float radius;
// float pi=3.14159;
// float circum;
// float diam;


// printf("Enter radius:");
// scanf("%f",&radius);

// circum= 2*(pi*radius);
// diam=2*radius;

// printf("Circumfernce of circle is:%f\n",circum);
// printf("Diameter of circle is:%f\n",diam);


//     return 0;
// }





// #include<stdio.h>
// int main(){

// int number;

// int a;
// int b;
// int c;
// int d;
// int e;

// int Ra;   //R--->reverse 
// int Rb;   //R--->reverse 
// int Rc;   //R--->reverse 
// int Rd;   //R--->reverse 
// int Re;   //R--->reverse 

// printf("Enter any number of 5 digits:");
// scanf("%d",&number);

// a=number/10;     //if 54321/10--->5432 which i am storing in a variable bcz i want to use his 5432 value in nxt step
// Ra=number%10;    //54321%10--->gives reminder 1 which i am storing in Ra and now used in nxt step

// b=a/10;          //now a/10 means 5432/10--->543 now stores this in b
// Rb=a%10;         //now  a%10--->gives me 2 which stores in Rb 

// c=b/10;          //same as previous one 54
// Rc=b%10;         //it gives me 3

// d=c/10;         //now give me 5
// Rd=c%10;        //now it gives us 4

// e=d;            //this is last one bcz d has now 5 and stores in e


// printf("%d\t%d\t%d\t%d\t%d",e,Rd,Rc,Rb,Ra);

//     return 0;
// }




//Another easy way for palindrome by using loops


// #include<stdio.h>
// int main(){

// int number;
// int reminder;
// int reverse=0;
// int temp;//assume number is 102
// int n;
// printf("Enter any number of 5 digits:");
// scanf("%d",&number);

// temp=number;//which assing to temporary variable
   
// while (number>0)
// {

     
   
//    reminder=number%10;//it gives me 2
//    reverse=reverse*10+reminder;//in reverse variable it stores 2 in first time

//    number=number/10;    //it give mw 12 for first time and loop continue untill number

// }

// if (reverse==temp)
// {
//     printf("Palindrome number");
// }
// else
//     printf("Not a palindrome number");




//     return 0;
// }


// palindrome programme

// #include<stdio.h>
// int main(){

// int n;
// int temp;
// int reverse=0;
// int reminder;

// printf("Enter number:");
// scanf("%d",&n);

// temp=n;

// while(temp>0){ //check condition in 2. still greater then 0  3.still greater then 0

// reminder=temp%10;                  //1)123 gives me reminder of 3   2) 12 gives reminder of 2  3)1%10--->gives me 1 bcz always reminder of this is 1 bcz this is not dividible
// reverse=reverse*10+reminder;    // first store 3                   2) now 3*10+reminder--->32   in 3)it gives me 321
// temp=temp/10;                //this give me 12 which updates temp variable  3)now it give me 1


// }
// if (reverse==n)
// {
//     printf("Palindrome");
// }

// else
// {
//     printf("Not Palindrome");
// }


//     return 0;
// }




