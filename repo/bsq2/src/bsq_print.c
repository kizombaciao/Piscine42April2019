#include "../inc/bsq.h"

void bsq_print_full_symbol(t_bsq *p)
{
    ft_putchar(p->symbol[2]);
}

void bsq_print_empty_or_obstacle(t_bsq *p, int nb)
{
    if (nb == OBSTACLE)
    {
        ft_putchar(p->symbol[1]);
    }
        else
    {
        ft_putchar(p->symbol[0]);
    }
}

void bsq_print_result(int max_i, int max_j, t_bsq *p)
{
    int i;
    int j;

    i = 0;
    p->max--;
    while (i < p->nrow)
    {
        j = 0;
        while (j < p->ncol)
        {
            if (i >= (max_i - p->max) && i <= max_i && j >= (max_j - p->max) && j <= max_j)
                bsq_print_full_symbol(p);
            else
                bsq_print_empty_or_obstacle(p, p->m[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}