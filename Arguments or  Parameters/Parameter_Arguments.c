// WAP to print any table and sum of two int by user defined function.......

#include<stdio.h>

int table(int n);
int Sum (int a,int b);

int main(){
    int n,i,a,b,SUM;
    printf("Enter no to find table:");
    scanf("%d",&n);                             //This is called Actual paprameter or Argument
    table(n);
  


    printf("Enter number_1(for any operation):");
    scanf("%d",&a);

    printf("Enter number_2(for any operation):");
    scanf("%d",&b);
    
    
         SUM= Sum(a,b);
    printf("Sum is %d\n",SUM);
    

    printf("For Fun:");
    scanf("%d",&SUM);
    
  
    return 1;
}

int table(int n){                              //Formal Parameter or Parameter
   for (int i = 1; i<=10; i++)
   {
    printf("%d*%d=%d\n",n,i,n*i);
   }
   return 0;
}


    int Sum (int x, int y){
        return  x+y;
    }






