#include "colle.h"

void rush_print(t_rush *data)
{   
    int i; 

    if (data->rush == 0 || data->rush == 1 ||  data->rush == 2 || data->rush == 3 || data->rush == 4)
    {
        ft_putstr("[rush-0");
        ft_putnbr(data->rush);
        ft_putstr("] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] ");
    }

   if (data->rush == 5)
    {
        i = 0;
        while (i <= 4)
        {
            ft_putstr("[rush-0");
            ft_putnbr(i);
            ft_putstr("] [");
            ft_putnbr(data->width);
            ft_putstr("] [");
            ft_putnbr(data->height);
            ft_putstr("]");
            if (i == 4)
                ft_putstr(" ");
            else
                ft_putstr(" || ");
            i++;
        }
    }

   if (data->rush == 6)
    {
        i = 2;
        while (i <= 4)
        {
            ft_putstr("[rush-0");
            ft_putnbr(i);
            ft_putstr("] [");
            ft_putnbr(data->width);
            ft_putstr("] [");
            ft_putnbr(data->height);
            ft_putstr("]");
            if (i == 4)
                ft_putstr(" ");
            else
                ft_putstr(" || ");
            i++;
        }
    }

   if (data->rush == 7)
    {
        ft_putstr("[rush-02] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] ");
    }

    if (data->rush == 8)
    {
        i = 3;
        while (i <= 4)
        {
            ft_putstr("[rush-0");
            ft_putnbr(i);
            ft_putstr("] [");
            ft_putnbr(data->width);
            ft_putstr("] [");
            ft_putnbr(data->height);
            ft_putstr("]");
            if (i == 4)
                ft_putstr(" ");
            else
                ft_putstr(" || ");
            i++;
        }
    }  

    if (data->rush == 9)
    {
        ft_putstr("[rush-03] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] ");
    }

    if (data->rush == 10)
    {
        i = 1;
        while (i <= 2)
        {
            ft_putstr("[rush-0");
            ft_putnbr(i * 2);
            ft_putstr("] [");
            ft_putnbr(data->width);
            ft_putstr("] [");
            ft_putnbr(data->height);
            ft_putstr("]");
            if (i == 2)
                ft_putstr(" ");
            else
                ft_putstr(" || ");
            i++;
        }
    }  
}
