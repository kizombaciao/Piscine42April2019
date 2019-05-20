#include <unistd.h>

void print_bits(unsigned char oct)
{
	unsigned int i;
	char c0 = '0';
	char c1 = '1';

	i = 1 << 8;
	while ((i >>= 1))
	{
		if (oct & i)
		{
			write(1, &c1, 1);
		}
		else
			write(1, &c0, 1);
	}
}
