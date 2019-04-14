#ifndef FT_OPP_H
# define FT_OPP_H

#include "do_op.h"

t_doop g_opptab[] =
{
    {"-", &ft_sub},
    {"+", &ft_add},
    {"*", &ft_mul},
    {"/", &ft_div},
    {"%", &ft_mod}
//    {'', &ft_usage}
};

#endif