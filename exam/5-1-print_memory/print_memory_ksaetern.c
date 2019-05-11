#include <unistd.h>

void	print_hex(unsigned char n)
{
	char b[] = "0123456789abcdef";
	if (n > 15)
	{
		write(1, &b[(n / 16) % 16], 1);
		write(1, &b[(n % 16)], 1);
	}
	else if (n <= 15)
	{
		write(1, "0", 1);
		write(1, &b[(n % 16)], 1);
	}
}

void	print_deci(unsigned char n)
{
	if (n > 31 && n < 127)
		write(1, &n, 1);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *tab = (unsigned char *)addr;
	size_t i = 0;
	size_t j;
	size_t k;

	while (i < size)
	{
		j = 0;
		while(j < 16)
		{
			if (j + i < size)
				print_hex(tab[i + j]);
			else
				write(1, "  ", 2);
			if (j != 0 && j % 2 == 1)
				write(1, " ", 1);
			j++;
		}
		k = 0;
		while(k < 16 && i < size)
		{
			print_deci(tab[i]);
			k++;
			i++;
		}
		write(1, "\n", 1);
	}
}