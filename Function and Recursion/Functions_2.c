#include<stdio.h>

void printhello();    //This is funcation prototype 1
void printby();       //this is 2 function prototype
int main(){
int n,i,in,Fun;
printf("Enter any no(+ or -):");
scanf("%d",&n);
   if (n>0)
   {
     printhello();        //function call 1
   }
   
  else 
    printby();           //function call 2


  printf("Enter 2 no to find table:");
  scanf("%d",&in);

  for ( i = 0; i <=10; i++)
  {
    printf("%d*%d=%d\n",in,i,in*i);

  }
  
    
printf("Enter any no for complementary:");       //just write this code for fun...
scanf("%d",Fun);
    return 0;
}

void printhello(){            //function definition 1        
    printf("Hello\n");          
}

void printby(){
    printf("Good Bye!\n");      //function definition 2
}
