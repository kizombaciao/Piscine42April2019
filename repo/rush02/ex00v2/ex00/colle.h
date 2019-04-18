#ifndef COLLE_H
# define COLLE_H

#include <unistd.h>
#include <stdlib.h>

typedef struct  s_rush
{
    int         rush;
    int         width;
    int         height;
    char        topleft;
    char        topright;
    char        bottomleft;
}               t_rush;

void    ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

t_rush *rush_create();
void rush_destroy(t_rush *data);
t_rush  *rush_read(t_rush *data);
t_rush  *rush_solve(t_rush *data);
void rush_print(t_rush *data);
int rush_error(t_rush *data);
void rush_bonus(t_rush *data);

#endif
