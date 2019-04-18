# include "sudoku.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    while (*s)
        ft_putchar(*s++);
}

void ft_print(char **grid)
{
    int x;
    int y;

    y = 0;
    while (y < 9)
    {
        x = 0;
        while (x < 9)
        {
            ft_putchar(grid[y][x]);
            if (x < 8)
                ft_putchar(' ');
            x++;
        }
        ft_putchar('\n');
        y++;
    }
}