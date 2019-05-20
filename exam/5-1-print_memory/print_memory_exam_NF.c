#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void h(int n)
{
	char c;
	char hx[] = "0123456789abcdef";

	c = hx[n];
	ft_putchar(c);
}

void p1(int n)
{
	int n1;
	int n2;

	n1 = n / 16;
	n2 = n % 16;
	h(n1);
	h(n2);
}

void inv(int n)
{
	char c = '.';

	if (n < 32 || n > 126)
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(n);
	}
}

void p2(int *p, int f, int i, size_t size)
{
	int j;
	int k;
	char c = '.';

	j = 0;
	while (j < 16)
	{
		if ((i + j) < (int)size)
		{
			k = (j / 4) + f;
			if ((j % 4) == 0)
				inv(p[k]);
			else
				ft_putchar(c);
		}
		j++;
	}
}

void    print_memory(const void *addr, size_t size)
{
	int i;
	int j;
	int k;
	int *p;
	char c0 = '0';
	char cs = ' ';
	char cr = '\n';

	p = (int *)addr;
	k = 0;
	i = 0;
	while (i < (int)size)
	{
		j = 0;
		while (j < 16)
		{
			if ((i + j) < (int)size) 
			{
				k = (j / 4) + (i / 16) * 4;
				if ((j % 4) == 0)
				{
					ft_putchar(cs);
					p1(p[k]);
				}
				if ((j % 4) == 2)
				{
					ft_putchar(cs);
				}
				if ((j % 4) == 1)
				{
					ft_putchar(c0);
					ft_putchar(c0);
				}
				if ((j % 4) == 3)
				{
					ft_putchar(c0);
					ft_putchar(c0);
					ft_putchar(c0);
					ft_putchar(c0);
				}
			}
			else
			{	
				if ((j % 4) == 0)
				{
					ft_putchar(cs);
					ft_putchar(cs);
					ft_putchar(cs);
				}
				if ((j % 4) == 2)
				{
					ft_putchar(cs);
				}
				if ((j % 4) == 1)
				{
					ft_putchar(cs);
					ft_putchar(cs);				
				}
				if ((j % 4) == 3)
				{
					ft_putchar(cs);
					ft_putchar(cs);				
					ft_putchar(cs);				
					ft_putchar(cs);				
				}
			}
			j++;
		}
		ft_putchar(cs);
		p2(p, (i / 16) * 4, i, size);
		ft_putchar(cr);
		i += 16;
	}
}
