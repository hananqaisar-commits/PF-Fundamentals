#include<stdio.h>
int main(){

    int array[10]={1,2,3,4,5,6,7,8,9,0};

    int x;
    x=8;

    for (int i = 0; i < 10; i++)//first time outer loop is 0 then move to 1 if inner loop completes its full round till 10 then outer willl bw=ecome 1 and so on
    {for (int j = i+1; j < 10-1; j++)//
    {
      
        if ( array[i]+array[j] == x )
        {
            printf("%d+%d=value of x\n",array[i],array[j]);

        }
    }
    
       
        
    }
    
    return 0;
}