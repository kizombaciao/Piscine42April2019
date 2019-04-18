#include "colle.h"

int main()
{
    t_rush *data;

    data = rush_create();
    data = rush_read(data);
    if (rush_error(data))
    {
        ft_putstr("aucune\n");
        return (0);
    }
    data = rush_solve(data);
    rush_print(data);
    rush_bonus(data);
    rush_destroy(data);
    return (0);
}