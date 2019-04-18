#include "colle.h"

void rush_bonus(t_rush *data)
{
    if (data->width == data->height)
    {
        ft_putstr("[square] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] ");   
        //ft_putstr("\nSquare");
    }
    ft_putstr("[rectangle] [");
    ft_putnbr(data->width);
    ft_putstr("] [");
    ft_putnbr(data->height);
    ft_putstr("]\n");   
}