#include "../inc/bsq.h"

t_bsq *bsq_initialize_array(t_bsq *p)
{
    int i;

	p->m = (int **)malloc(sizeof(int *) * (p->nrow + 1));
	p->s = (int **)malloc(sizeof(int *) * (p->nrow + 1));
	i = 0;
    while (i < p->ncol)
    {
		p->m[i] = (int *)malloc(sizeof(int) * (p->ncol + 1));
		p->s[i] = (int *)malloc(sizeof(int) * (p->ncol + 1));
		i++;
    }
	p->maxi = (int *)malloc(sizeof(int) * ((p->nrow * p->ncol) / 2 + 1));
	p->maxj = (int *)malloc(sizeof(int) * ((p->nrow * p->ncol) / 2 + 1));
    return (p);
}

t_bsq *bsq_create_struct()
{
    int i;
    t_bsq *p;

    p = (t_bsq *)malloc(sizeof(t_bsq));
    p->nrow = 0;
    p->ncol = 0;
    p->symbol[0] = '\0';
    p->symbol[1] = '\0';
    p->symbol[2] = '\0';
    p->max = 0;
    p->max_i = 0;
    p->max_j = 0;
    p->maxindex = 0;
	return (p);
}

// to construct the m matrix
t_bsq *bsq_construct(char *fn, t_bsq *p)
{
	int		i;
	int		j;
	char	c;
	int 	fd;

	fd = open(fn, O_RDONLY);
	if (!ft_open_error(fd))
		return (0);
	fd = bsq_next_readline(fd);
	i = 0;
	j = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
		{
			i++;
			j = 0;
		}
		else
		{
			p->m[i][j] = bsq_if_dot(c, p);
			j++;	
		}
	}
    if (!ft_close_error(close(fd)))
	    return (0);
	return (p);
}

void bsq_free(t_bsq *p)
{
	int i;
	free(p);
}

void bsq_free_stdin(t_bsq *p)
{
	int i;

	free(p);
}

//NOT USED!!!
/*
t_bsq *bsq_construct_stdin(char *fn, t_bsq *p)
{
    int i;
    int j;
    int c;
	int fd;

	//fd = bsq_next_readline(fd);
    fd = open(fn, O_RDONLY);
	if (!ft_open_error(fd))
		return (0);
	
	i = 0;
	j = 0;
	while (read(fd, &c, 1) > 0)
	{
		write(1, &c, 1);
		if (c == '\n')
		{
			i++;
			j = 0;
			printf("\nHERE444444!!!");

		}
		else
		{
			p->m[i][j] = bsq_if_dot(c, p);
			j++;	
		}
	}

	printf("\nHEREc  %d  %d  %c  %c  %c", p->nrow, p->ncol, p->symbol[0], p->symbol[1], p->symbol[2]);

	printf("\nHERE!!!");
	bsq_print(p);
	printf("\nHERE222!!!");

	if (!ft_close_error(close(fd)))
		return (0);
    return (p);
}
*/
