#include "sudoku.h"

int main(int ac, char **av)
{
    char **grid;

    if (ac == 10)
    {
        grid = ft_build(ac, &av[1]);
        if (check_inputs(grid))        
        {
            ft_print(grid);
            ft_putchar('\n');

            if (solve(&av[1], 0))
            {
                printf("\nFWD SOLUTION");
                ft_print(&av[1]);
            }
            else
                ft_putstr("Error\n");

            if (solve2(&av[1], 0))
            {
                printf("\nREV SOLUTION");
                ft_print(&av[1]);
            }    
            else
                ft_putstr("Error\n");
        }
        else
        {
            ft_putstr("Error\n");
        }
    }
    else
    {
        ft_putstr("Error\n");
    }
    ft_destroy(grid);
    return (0);
}