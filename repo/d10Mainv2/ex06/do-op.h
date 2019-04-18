#ifndef DO_OP_H
#define DO_OP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define NBOPER  5

typedef struct s_doop
{
    char        oper;
    int         (*opfunc)(int, int);

}              t_doop;

int ft_valid(char *c);

void ft_putchar(char c);
void ft_putstr(char *c);
int ft_atoi(char *str);
void ft_putnbr(int nb);

void ft_initialize(t_doop *opp);
int ft_calc(t_doop *opp, int n1, char op, int n2);

int ft_add(int n1, int n2);
int ft_subtract(int n1, int n2);
int ft_multiply(int n1, int n2);
int ft_divide(int n1, int n2);
int ft_modulus(int n1, int n2);



#endif
