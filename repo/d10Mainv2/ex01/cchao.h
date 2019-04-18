#ifndef CCHAO_H
#define CCHAO_H

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void    ft_foreach(int *tab, int length, void (*f)(int));

#endif