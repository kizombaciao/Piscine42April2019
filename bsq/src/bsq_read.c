#include "../inc/bsq.h"

int bsq_read_title(int fd, t_bsq *p)
{
	int i;
	char c;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			return (fd);
		if (ft_is_num(c))
		{
			p->nrow = p->nrow * 10 + (c - '0');
		} else {
			p->symbol[i] = c;
			i++;
		}
	}
	return (fd);
}

t_bsq *bsq_read_body(int fd, t_bsq *p)
{
	int nchar;
	int rn;
	char buf[BUF_SIZE + 1];

	nchar = 0;
	rn = 1;
	while (rn)
	{
		rn = read(fd, buf, BUF_SIZE);
		nchar += rn;
	}
	p->ncol = (nchar - p->nrow) / p->nrow;
	return (p);
}

int bsq_next_readline(int fd)
{
	int c;

	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			return (fd);
	}
	return (fd);
}

t_bsq *bsq_read_body_stdin(int fd, t_bsq *p)
{
	int i;
	int j;
	char c;
	int nchar;

	i = 0;
	j = 0;
	nchar = 0;
	while (read(fd, &c, 1) > 0)
	{
		//write(1, &c, 1);
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
		nchar++;	
	}
	p->ncol = (nchar - p->nrow) / p->nrow;
	return (p);
}

t_bsq *bsq_read_stdin(t_bsq *p)
{
	bsq_read_title(0, p);
	p->ncol = C;
	p = bsq_initialize_array(p);
	p = bsq_read_body_stdin(0, p);
	return (p);
}

t_bsq *bsq_read(char *fn, t_bsq *p)
{
	int fd;

	fd = open(fn, O_RDONLY);
	if (!ft_open_error(fd))
		return (0);

	fd = bsq_read_title(fd, p);
	p = bsq_read_body(fd, p);
	p = bsq_initialize_array(p);

	if (!ft_close_error(close(fd)))
		return (0);
	return (p);
}
