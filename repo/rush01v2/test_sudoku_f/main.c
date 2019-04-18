#include "header.h"

int		main(int argc, char **argv)
{
	char	grid[9][9];

	if (!(input_is_valid(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	build_table(argv + 1, grid);
	solve_sudoku(grid, 0, 0);
	print_table(grid);
	return (0);
}
