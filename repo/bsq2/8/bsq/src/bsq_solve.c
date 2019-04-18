#include "../inc/bsq.h"

t_bsq *bsq_solve_setup(t_bsq *p)
{
    int i, j;

    i = 0;
    while (i < p->nrow)
    {
        p->s[i][0] = p->m[i][0];
        i++;
    }
    j = 0;
    while (j < p->ncol)
    {
        p->s[0][j] = p->m[0][j];
        j++;
    }
    i = 1;
    while (i < p->nrow)
    {
        j = 1;
        while (j < p->ncol)
        {
            if (p->m[i][j] == EMPTY)
                p->s[i][j] = bsq_min(p->s[i][j-1], p->s[i-1][j], p->s[i-1][j-1]) + 1;
            else
                p->s[i][j] = OBSTACLE;
            j++;
        }
        i++;
    }
    return (p);
}

t_bsq *bsq_solve_max(t_bsq *p)
{
    int i;
    int j;

    p->max = p->s[0][0];
    p->max_i = 0;
    p->max_j = 0;
    i = 0;
    while (i < p->nrow)
    {
        j = 0;
        while (j < p->ncol)
        {
            if (p->s[i][j] > p->max)
            {
                p->max = p->s[i][j];
                p->max_i = i;
                p->max_j = j;
            }
            j++;
        }
        i++;
    }
    return (p);
}

t_bsq *bsq_solve_max_ij(t_bsq *p)
{
    int i;
    int j;
    int k;

    k = 0;
    i = 0;
    while (i < p->nrow)
    {
        j = 0;
        while (j < p->ncol)
        {
            if (p->s[i][j] == p->max)
            {
                p->maxi[k] = i;
                p->maxj[k] = j;
                k++;
            }
            j++;
        }
        i++;
    }
    p->maxindex = k;
    return (p);
}

t_bsq *bsq_solve_multiple_candidates(t_bsq *p)
{
    int i;
    int decide_i;
    int decide_j;

    decide_i = p->maxi[0];
    decide_j = p->maxj[0];

    i = 0;
    while (i < p->maxindex)
    {
        if (p->maxi[i] < decide_i)
        {
            decide_i = p->maxi[i];
        }
        i++;
    }
    i = 0;
    while (i < p->maxj[0])
    {
        if (p->maxi[i] == decide_i)
        {
            if (p->maxj[i] < decide_j)
            {
                decide_j = p->maxj[i];
            }
        }
        i++;
    }
    p->max_i = decide_i;
    p->max_j = decide_j;
    return (p);
}

t_bsq *bsq_solve(t_bsq *p)
{
    p = bsq_solve_setup(p);
    p = bsq_solve_max(p);
    p = bsq_solve_max_ij(p);
    p = bsq_solve_multiple_candidates(p);
    bsq_print_result(p->max_i, p->max_j, p);
    return (p);
}