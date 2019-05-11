#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	unsigned char c;

	c = 1;
	c = swap_bits(c);
    printf("\n%u   %d", c, c); // note, %u is used for unsigned char
	return (0);
}

/*
unsigned char sb(unsigned char oct)
{
    return((oct >> 4) | (oct << 4));
}
*/

char sb(char oct)
{
	return (oct >> 4) | (oct << 4);
}