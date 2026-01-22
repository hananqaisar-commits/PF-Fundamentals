#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int furtherquestion();

int main()
{
    srand(time(0));

    int result = furtherquestion();
    int ans = 0;
    while (1)//it mean condition is true always
    {

        printf("Enter your answer here (-1 to stop): ");
        scanf("%d", &ans);

        if (ans == result)
        {
            printf("Very Good!\n");
            result = furtherquestion();
        }
        else if (ans==-1)
        {
             printf("Thanks\n");
             break;
        }
        
        else
        {
            printf("No. Please try again\n");
        }
    }

    return 0;
}

int furtherquestion()
{

    int x = rand() % 9;
    int y = rand() % 8;

    printf("How much %d times %d?\n", x, y);

    return x * y;
}