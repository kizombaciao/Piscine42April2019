#ifndef CCHAO_H
#define CCHAO_H

#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>

//void	ft_putchar(char c);
//void	ft_putnbr(int nb);
int ft_any(char **tab, int (*f)(char *));
int func(char *c);

#endif

// gcc -c *.c -I *.h
// ar rc libft.a *.o
// gcc main.c -L. -lft
// ./a.out