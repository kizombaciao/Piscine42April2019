#include <unistd.h>
#include <stdio.h>

// note, unsigned char is used without single quotes
void	print_bits(unsigned char octet) {
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
        printf("\n111:  %d   %d   %d", octet, i, octet/i);
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}
void	print_bits2(unsigned char octet) {
    int	i = 256; // why 256 instead of 128???
    while (i >>= 1) { // same as i = i >> 1;
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
        //printf("\n%d", i);
    }
}
int		main(void)
{
    int n = 255;
	//print_bits(n);
	write(1, "\n", 1);
    print_bits2(n);
}
/*
void ttt()
{
    i = 256;
    while (i >>= 1) {
        (octet & i) ? write(1,"1",1) : write(1,"0",1);      
    }
}
*/