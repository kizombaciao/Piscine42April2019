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
                printf("\nMAX = %d:  (i, j) = (%d, %d)", p->max, i, j);
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

    printf("\nDECIDE  %d, %d", decide_i, decide_j);
    return (p);
}

t_bsq *bsq_solve(t_bsq *p)
{
    int i, j, k;

    p = bsq_solve_setup(p);

    // find max entry and its indices
    p = bsq_solve_max(p);

    // find i, j coordinates of mulitple max_of_s    
    p = bsq_solve_max_ij(p);

    // print graph of s[][]
	// FOR DEBUGGING:  bsq_print_max(p);

    // CHOOSE THE CANDIDATE AMONG MULTIPLE SOLUTIONS
    // TOP AND LEFT
    i = 0;
    while (i < p->maxindex)
    {
        printf("\n--MULTIPLE SOLUTIONS--  %d, %d, %d", p->max, p->maxi[i], p->maxj[i]);
        i++;
    }
    p = bsq_solve_multiple_candidates(p);



    printf("\n\n--FINAL RESULT--  %d  %d  %d:\n", p->max, p->max_i, p->max_j);
    // NOTE, max_i and max_j will need to be chosen if multiples!!!
    // REQUIRED PRINT
    bsq_print_result(p->max_i, p->max_j, p);
    
    return (p);
}