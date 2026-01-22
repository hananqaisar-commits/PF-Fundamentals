#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int movehare(int arr, int move);
int movetortoise(int arr, int move);
void trace(int hare, int tort);
int msin()
{

    int arrsize;
    srand(time(0));
    int arr[70];
    arrsize = sizeof(arr) / sizeof(arr[0]); // it give us size
    int arr[0] = 1;                         // starting point
    int arr[arrsize] = 70;
    printf("BANG!!!!!\n");
    printf("AND TH'RE OFF!!!!!\n");

    int haremove = movehare(arr, move);
    int tortmove = movetortoise(arr, move);
    int tracing=trace(haremove,tortmove);
    while (haremove < 70 && tortmove < 70)
    {
        
    }
    return 0;
}
int movehare(int arr, int move)
{
    int move = (rand() % 10) + 1;
    if (move == 1 || move == 2)
    {
        return move;
    }
    else if (move == 3 || move == 4)
    {
        return move + 9;
    }
    else if (move == 5)
    {
        return move - 12;
    }
    else if (move >= 6 && move <= 8)
    {
        return move + 1
    }
    else if (move == 9 || move == 10)
    {
        return move - 2;
    }
    else
        return 1;
}
int movetortoise(int arr, int move)
{
    int move = (rand() % 10) + 1;
    if (move >= 1 && move <= 5)
    {
        return move + 3;
    }
    else if (move == 6 || move == 7)
    {
        return move - 6;
    }
    else if (move >= 8 && move <= 10)
    {
        return move + 1;
    }
}
void trace(int hare, int tort){

    for (int i = 1; i <= 70; i++)
        {
            if (haremove == tortmove)
            {
                printf("OUCH!!!\n");
            }
            if (haremove < 1)
                move = 1;
            if (tortmove < 1)
                move = 1;

            if (haremove == 70)
            {
                printf("Hare Wins");
            }
            else if (tortmove == 70)
            {
                printf("Tortoise Wins");
            }
            else
                printf("Underdogs win or its a tie");
        }
}