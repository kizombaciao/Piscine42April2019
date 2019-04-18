#ifndef CCHAO_H
#define CCHAO_H

#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>

int		ft_nb_words(char *str);
int		ft_ln_w(char *str, int i);
char	**ft_split_whitespaces(char *str);
void    ft_swap_ptr(char **p1, char **p2);
int		ft_strcmp(char *s1, char *s2);
void    ft_sort_wordtab(char **tab);


#endif

// gcc -c *.c -I *.h
// ar rc libft.a *.o
// gcc main.c -L. -lft
// ./a.out