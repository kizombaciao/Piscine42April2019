#include <stdio.h> // DDD
#include <unistd.h>

void print_deci(unsigned char n)
{
	if (n >= 32 && n <= 126)
		write(1, &n, 1);
	else
		write(1, ".", 1);	
}
void print_hex(unsigned char n)
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
void print_memory(const void *addr, size_t size)
{
	unsigned char *tab;
	int i;
	int j;
	int k;

 	tab = (unsigned char *)addr; // given originally int, what happens ???
	printf("\n222 %lu  %zu\n", sizeof(tab), size); // why is this 8 ???
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				print_hex(tab[i + j]);
			else
				write(1, "  ", 2); // for the last line
						
			if (j % 2 == 1)
				write(1, " ", 1);
			j++;
		}
		k = 0;
		while (k < 16 && i < size)
		{
			print_deci(tab[i]);
			k++;
			i++;
		}
		write(1, "\n", 1);
	}	
}

int		main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};
	unsigned char *p;
	int i = 0;

	print_memory(tab, sizeof(tab));
	
	// TEST TO UNDERSTAND THE TYPECAST OF AN INT ARRAY INTO CHAR ARRAY ???
	printf("\n111\n");
	p = (unsigned char *)tab;
	while (i < 40)
	{
		printf(" %d ", *p);
		i++;
	}
		
	return (0);
}

// size = 40
// 16 because (8 * 4) / 2 = 16.
