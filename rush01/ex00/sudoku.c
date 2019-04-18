#include "sudoku.h"

char solve(char **grid, int p)
{
    unsigned char y;
    unsigned char x;
    char n;

    y = p / 9;
    x = p % 9;
    n = 1 + '0';
    if (p == 81)
        return (1);

    if (grid[y][x] != '.')
        return (solve(grid, p + 1));

    while (n < (10 + '0'))
    {
        if (is_legal(n, x, y, grid))      
        {
            grid[y][x] = n;
            if (solve(grid, p + 1))
                return (1);
        }
        n++;
    }
    grid[y][x] = '.';
    return (0);
}

char solve2(char **grid, int p)
{
    unsigned char y;
    unsigned char x;
    char n;

    y = p / 9;
    x = p % 9;
    n = 9 + '0';
    if (p == 81)
        return (1);

    if (grid[y][x] != '.')
        return (solve(grid, p + 1));

    while (n >= (1 + '0'))
    {
        if (is_legal(n, x, y, grid))      
        {
            grid[y][x] = n;
            if (solve(grid, p + 1))
                return (1);
        }
        n--;
    }
    grid[y][x] = '.';
    return (0);
}