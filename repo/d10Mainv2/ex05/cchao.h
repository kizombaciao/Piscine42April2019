#ifndef CCHAO_H
#define CCHAO_H

#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));
int func(int n1, int n2);

#endif

// gcc -c *.c -I *.h
// ar rc libft.a *.o
// gcc main.c -L. -lft
// ./a.out