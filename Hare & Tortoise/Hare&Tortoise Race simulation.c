#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int movehare(int move);
int movetortoise(int move);
void trace(int hare, int tort);
int main()
{

    srand(time(0));

    printf("BANG!!!!!\n");
    printf("AND TH'RE OFF!!!!!\n\n");

    int haremove=1;
    int tortmove=1;
    int tracing;
    while (haremove < 70 && tortmove < 70)
    {
         haremove=movehare(haremove);

         tortmove=movetortoise(tortmove);

        if(haremove<1) haremove=1;
        if(tortmove<1) tortmove=1;

        trace(haremove,tortmove);
    }
    return 0;
}
int movehare(int move)
{

    int m = (rand() % 10) + 1;
    if (m == 1 || m == 2)
    {
        return move;
    }
    else if (m == 3 || m == 4)
    {
        return move + 9;
    }
    else if (m == 5)
    {
        return move - 12;
    }
    else if (m >= 6 && m <= 8)
    {
        return move + 1;
    }
    else if (m == 9 || m == 10)
    {
        return move - 2;
    }
    else
        return 1;
}
int movetortoise(int move)
{
    int m=(rand() % 10) + 1;
    if (m >= 1 && m <= 5)
    {
        return move + 3;
    }
    else if (m == 6 || m == 7)
    {
        return move - 6;
    }
    else if (m >= 8 && m <= 10)
    {
        return move + 1;
    }
}
void trace(int hare, int tort)
{

    for (int i = 1; i <= 70; i++)
    {


        if(i==hare&&i==tort)
            printf("OUCH");
        else if (i==hare )
            printf("H");
        else if (i==tort)
            printf("T");
            else
                printf("-");
    }
    puts("");

    if (hare >= 70)
        {
            printf("Hare Wins!!! YAY!!!\n");

        }
    else if (tort >= 70)
        {
            printf("Tortoise Wins!!! YAY!!!\n");

        }
    else if(hare>=70 && tort>=70)
            printf("Its a tie\n");


}
