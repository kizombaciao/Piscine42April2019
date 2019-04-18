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

// TO IDENTIFY MULTIPLE SOLUTION ON THE GRID
void bsq_print_max(t_bsq *p)
{
    int i;
    int j;

    //ft_putchar('\n'); // needed???
    printf("\n");
    i = 0;
    while (i < p->nrow)
    {
        j = 0;
        while (j < p->ncol)
        {
            if (p->s[i][j] == p->max)
                printf("%d", p->s[i][j]);
            else
                printf("%c", p->symbol[0]);                
            j++;
        }
        printf("\n");
        //ft_putchar('\n');        
        i++;
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

// USED FOR DEBUGGING!!!
void bsq_print(t_bsq *p)
{
    int i;
    int j;

    printf("\n");
    i = 0;
    while (i < p->nrow)
    {
        j = 0;
        while (j < p->ncol)
        {
            printf("%d ", p->m[i][j]);
            j++;
        }
        printf("\n");
        //ft_putchar('\n');
        i++;
    }
    printf("\n");
}
