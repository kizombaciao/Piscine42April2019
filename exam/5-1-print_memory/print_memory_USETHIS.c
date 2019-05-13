#include <unistd.h>



void print_memory(const void *addr, size_t size)
{
	unsigned char *tab;
	int i;
	int j;
	int k;

 	tab = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				print_hex(tab[i + j]);
			else
				write(1, " ", 2);			
			if (j != 0 && j % 2 == 1)
				write(1, " ", 1);
			j++;
		}
	}	
}

int		main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}

// size = 40
// 16 because (8 * 4) / 2 = 16.
