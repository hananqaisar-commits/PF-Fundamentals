#include <stdio.h>
int main()
{
    int i, fazool, j, a; // a=asteric and i=counter ch=expression of switch j=2 counter
    int ch = 1;
    printf("Enter any number of which you want to print asterics(1-10):");
    scanf("%d", &a);

    if (a >= 1 && a <= 10){
        for(i=1;i<=a;i++)                    //it prints a(input) number of rows
        {
            

            for (j= 1; j<=a; j++)            //it prints a(input) number of coloumns
            {
               
                printf("*");

            }
            printf("\n"); 
        }
        
    }
    
    
    else if (a == -1)
    {
        printf("Sorry\n");
    }
    else
    {
        printf("Sorry value is out of range\n");
    }

    printf("THANKS FOR USING THIS");
    scanf("%d", &fazool);
    return 0;
}