// WAP to convert Celsius to Fahrehite

#include<stdio.h>

float converter(float ces);
int main(){
    float ces,fah,i;
    if (ces==00)          //if user enter 00 it say good bye Have a nice day.
    {
      printf("\t\tGoodBye\n\tHave a nice day()'.')");
      return 0;
    }
    else if (ces>=0)
    {
       printf("Enter celsius to convert into Fahrenite(Except 00):");
     scanf("%f",&ces);
     printf("After converting the value is:%f\n",converter(ces));     //This is called calling of function
    }
else


printf("\t\tStay Healthy ('-')\n");
scanf("%d",&i);
return 0;
}

   

float converter(float ces){
 
    // This is defining of function 


    
   float fah= (ces * 9.0/5.0) + 32;
   return fah;
}