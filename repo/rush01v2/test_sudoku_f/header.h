#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

int		is_valid(char number, char grid[9][9], int row, int column);
int		solve_sudoku(char grid[9][9], int i, int j);
void	build_table(char **argv, char grid[9][9]);
int		ft_strlen(char *str);
int		line_is_valid(char *str);
int		input_is_valid(int argc, char **argv);
void	print_table(char grid[9][9]);

#endif
