#include<stdio.h>
int main()
{
    int n;
    char ch,ch1;  //ch mean character and ch1 is character 1
    char space;   //Space variable is for help in taking space and newline as input in my programme
    do
    {
        printf("Enter odd number between(0 to 20): ") ;
        scanf("%d",&n);
    }
    while(n%2==0 || n>19);

    printf("Enter the character: ");
    scanf("%c", &space);
    scanf("%c", &ch);

    if(ch==' ' || ch=='\n')//if user enter space or newline then * is taken as symbol for diamond pattern
    {
        ch1='*';
    }
    else//otherwise the symbol used which is taken by user as input
    {
        ch1=ch;
    }


    if(n<=1||n<20 && n%2!=0)
    {
//for upper half of diamond pattern
        for(int i=1; i<=n; i++)
        {

            for(int j=i; j<n; j++)
            {
                printf(" ");
            }
            for(int k=0; k<2*i-1; k++)
            {
                printf("%c",ch1);
            }
            printf("\n");
        }

//for lower half of diamond pattern
        for(int i=n; i>1; i--)
        {

            for(int j=n; j>=i; j--)
            {
                printf(" ");
            }
            for(int k=2*i-1; k>2; k--)
            {
                printf("%c",ch1);
            }
            printf("\n");
        }
    }

    return 0;
}
