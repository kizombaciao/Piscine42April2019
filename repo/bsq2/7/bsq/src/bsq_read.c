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
	//printf("\n444b  %d  %c  %c  %c", p->nrow, p->symbol[0], p->symbol[1], p->symbol[2]);
	return (fd);
}

t_bsq *bsq_read_body(int fd, t_bsq *p)
{
	int nchar;
	int rn;
	char buf[BUF_SIZE + 1];

	printf("\n----------WE START HERE!!!------------------\n");

	nchar = 0;
	rn = 1;
	while (rn)
	{
		rn = read(fd, buf, BUF_SIZE);
		nchar += rn;
		//write(1, buf, rn);
	}
	p->ncol = (nchar - p->nrow) / p->nrow;
	//printf("\n777a  %d  %d  %d", nchar, p->nrow, p->ncol);
	//printf("\n777a  %c  %c  %c", p->symbol[0], p->symbol[1], p->symbol[2]);
	return (p);
}

// because i have to read again to build the grid
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
		write(1, &c, 1);
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
	char c;
	char *fn;
	
	bsq_read_title(0, p);
	//printf("\n999a  %d  %c  %c  %c", p->nrow, p->symbol[0], p->symbol[1], p->symbol[2]);
	
	p->ncol = C;
	p = bsq_initialize_array(p);

	p = bsq_read_body_stdin(0, p);
	//printf("\n555c  %d  %d  %c  %c  %c", p->nrow, p->ncol, p->symbol[0], p->symbol[1], p->symbol[2]);
//	printf("\n666a  %d  %d", p->nrow, p->ncol);
	bsq_print(p);


	//p = bsq_construct_stdin(fn, p);

	bsq_print(p);
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
