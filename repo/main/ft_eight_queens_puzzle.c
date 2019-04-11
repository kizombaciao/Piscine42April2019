#include <stdio.h>

int is_safe(int board[8], int column, int row)
{
    int i;

    i = -1;
    while (++i < column) // check the past upto current pos_column, to see any violations
    {
        if (row == board[i] || i + board[i] == column + row || i - board[i] == column - row) // ???
        {
            return (0);
        }
    }
    return (1);
}

void recursive_check(int board[8], int *count, int pos_col)
{
    int i;

    if (pos_col == 8)
    {
        *count += 1;
    }
    else
    {
        i = -1;
        while (++i < 8)
        {
            if (is_safe(board, pos_col, i))
            {
                board[pos_col] = i;
                recursive_check(board, count, pos_col + 1);
            }
        }
    }
}

int ft_eight_queens_puzzle(void)
{
    int board[8];
    int i;
    int count;

    i = -1;
    while (++i < 8)
    {
        board[i] = -1;
    }
    count = 0;
    recursive_check(board, &count, 0);
    return (count);
}

int main()
{
    int num;

    num = ft_eight_queens_puzzle();
    printf("\n%d", num);
}