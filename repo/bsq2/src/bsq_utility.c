#include "../inc/bsq.h"

int bsq_if_dot(char c, t_bsq *p)
{
	return (c == p->symbol[0]);
}

int bsq_min(int a, int b, int c)
{
    int m = a;

    if (m > b)
        m = b;
    if (m > c)
        m = c;
    return (m);
}