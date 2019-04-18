#ifndef SUDOKU_H
# define SUDOKU_H

#include <stdio.h>

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *s);
int ft_strlen(char *s);
void ft_print(char **grid);
char *ft_strcpy(char *dest, char *src);
char **ft_build(int ac, char **grid);
void	ft_destroy(char **factory);
char solve(char **grid, int p);
char solve2(char **grid, int p);
int check_inputs(char **grid);

int check_line(char n, unsigned char y, char **tab);
int check_col(char n, unsigned char x, char **tab);
int check_square(char n, unsigned char x, unsigned char y, char **tab);
int is_legal(char n, unsigned char y, unsigned char x, char **tab);

#endif

// norm

// MULTIPLE SOLUTIONS