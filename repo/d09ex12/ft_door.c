#include <unistd.h>
#include "ft_door.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

t_bool open_door(t_door *door)
{
    ft_putstr("Door opening...");
    door->state = OPEN;
    return (TRUE);
}

t_bool close_door(t_door *door)
{
    ft_putstr("Door closing...");
    door->state = CLOSE;
    return (TRUE);
}

t_bool is_door_open(t_door *door)
{
    ft_putstr("Door is open?");
    return (door->state == OPEN);
}

t_bool is_door_close(t_door *door)
{
    ft_putstr("Door is close?");
    return (door->state == CLOSE);
}

// DONE