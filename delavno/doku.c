#include <stdio.h>
#include <stdbool.h>

int board[9][9] =
    {{5, 3, 0, 0, 7, 0, 0, 0, 0},
     {6, 0, 0, 1, 9, 5, 0, 0, 0},
     {0, 9, 8, 0, 0, 0, 0, 6, 0},

     {8, 0, 0, 0, 6, 0, 0, 0, 3},
     {4, 0, 0, 8, 0, 3, 0, 0, 1},
     {7, 0, 0, 0, 2, 0, 0, 0, 6},

     {0, 6, 0, 0, 0, 0, 2, 8, 0},
     {0, 0, 0, 4, 1, 9, 0, 0, 5},
     {0, 0, 0, 0, 8, 0, 0, 7, 9}};

void sudoku(int x, int y)
{
    if (x==9){
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
         printf("\n");
        return;
    }
    
    


    if (board[x][y] != 0)
    {
        if (y == 8)
        {
            sudoku(x + 1, 0);
        }
        else
        {
            sudoku(x, y + 1);
        }
        return;
    }

    for (int n = 1; n <= 9; n++)
    {
        int n_found = false;
        for (int j = 0; j < 9; j++)
        {
            n_found = n_found || (board[x][j] == n);
        }
        for (int i = 0; i < 9; i++)
        {
            n_found = n_found || (board[i][y] == n);
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                n_found = n_found || (board[3 * (x / 3) + i][3 * (y / 3) + j] == n);
            }
        }
        if (!n_found)
        {
            board[x][y] = n;
            if (y == 8)
            {
                sudoku(x + 1, 0);
            }
            else
            {
                sudoku(x, y + 1);
            }
            board[x][y] = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    sudoku(0, 0);
    return 0;
}
