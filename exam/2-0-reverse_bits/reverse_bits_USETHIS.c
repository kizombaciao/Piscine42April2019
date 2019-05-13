// USE THIS VERSION!!!  Below works!
#include <stdio.h>
#include <unistd.h>
unsigned char reverse_bits(unsigned char octet)
{
     unsigned char rev_num;
     int i;
      
      i = 8;
      rev_num = 0;
      while (i > 0)
      {
           rev_num = (rev_num  << 1) | (octet & 1);
           octet = octet >> 1;
           i--;
      }
      return (rev_num);
}
// also works!!!
unsigned char rb(unsigned char oct)
{
	int i;
	unsigned char r;

	i = 1 << 8;
    printf("\n222a %d", i); // 256
	r = 0;
	while ((i >>= 1))
	{
		r = (r << 1) | (oct & 1);
		oct >>= 1;
	}
	return (r);
}

int main()
{
    unsigned char a = 1; // 0000 0001
    printf("\n111 %d", reverse_bits(a));
    printf("\n111b %d", rb(a));
}