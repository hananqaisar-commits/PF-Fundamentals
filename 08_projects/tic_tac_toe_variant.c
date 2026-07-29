#include <stdio.h>
#define SIZE 3

void table(char board[SIZE][SIZE])
{
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1)
                printf("|");
        }
        printf("\n");
        
            printf("---|---|---\n");
    }
    printf("\n");
}

int placemove(char board[SIZE][SIZE], int move, char player)
{
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O'){
        board[row][col] = player;
        return 1;
        }
    else{
        printf("Invalid move!\n");
        return 0;
    }
}

int checkwin(char board[SIZE][SIZE], char player)
{
    for (int i = 0; i < SIZE; i++)
    {
        // Rows
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player)
            return 1;

        // Columns
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player)
            return 1;
    }

    // Diagonals
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
        return 1;

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
        return 1;

    return 0;
}

int main()
{
    char board[SIZE][SIZE] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    char player = 'X';
    int move, turns = 0;

    printf("GAME START!\n");
    table(board);

    while (turns < 9)
    {
        printf("Player %c, enter move no %d: ", player,turns+1);
        if (scanf("%d", &move)!=1)//it will check user give int or char if int it will return 1 otherwise 0 
        {
            printf("\nInvalid input choose between(0-9)\n");
            while (getchar()!='\n')
            {
                continue;
            }
            
        }
        
       
        

        if (move < 1 || move > 9 )
        {
            printf("\nInvalid input! Choose 1-9.\n");
            continue;
        }

       int check= placemove(board, move, player);
        if (check!=1)
        {
            continue;
        }        
        table(board);

        if (checkwin(board, player))
        {
            printf(" Player %c Wins!\n", player);
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
        turns++;
    }

    printf("It's a TIE!\n");
    return 0;
}