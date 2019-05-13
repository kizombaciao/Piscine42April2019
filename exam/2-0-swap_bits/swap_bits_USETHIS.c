#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
void bin2(unsigned char n)
{
    unsigned i;

    i = 1 << 8;
    while (i >>= 1)
        (n & i) ? printf("1") : printf("0");
}

int		main(void)
{
	unsigned char c;

	c = 65;
	bin2(c);
	c = swap_bits(c);
    //printf("\n\n%u   %d\n\n", c, c); // note, %u is used for unsigned char
	bin2(c);
	return (0);
}