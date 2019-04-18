#include "../inc/bsq.h"

int main(int ac, char **av)
{
	int i;
    t_bsq *p;

    if (!ft_argc_error(ac))
    {
		p = bsq_create_struct();
		p = bsq_read_stdin(p);
		p = bsq_solve(p);
		//bsq_free_stdin(p);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			p = bsq_create_struct();
			p = bsq_read(av[i], p);
			p = bsq_construct(av[i], p);
			p = bsq_solve(p);
			bsq_free(p);
			i++;
		}
	}
    return (0);
}