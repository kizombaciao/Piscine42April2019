#include <stdio.h>
#include <unistd.h>

void	print_hex_byte(unsigned char c)
{
	char hex_digits[] = "0123456789abcdef";

	//printf("\n555a %c", c);
	// because there are only two digits
	// we calculate the index to determine which part of the base array.
	write(1, hex_digits + (c / 16), 1);
	write(1, hex_digits + (c % 16), 1);
}

// first time, we loop to 16
// 2nd time, we loop to 16
// 3rd time, we loop to 8, and then "  "
void	print_hex_digits(size_t max, const unsigned char *addr)
{
	size_t i = 0;

	//while (i < max)
	//{
	//	printf("\n777a  %zu %d", i, addr[i]);
	//	i++;
	//}
	//i = 0;

	while (i < 16)  // why 16? to match the display of 16 2-digit hex per row
	{
		// this if only matters for the last row, when max is less than 16.
		if (i < max) // max = 40 because 4 digits + 1 space, and 5 * 8 = 40 per row
			print_hex_byte(addr[i]); // values of the array
		else
			write(1, "  ", 2); // for the last row
		i++;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
}

//#include <stdio.h>
// why is such a function even useful???  the fact that g signifies 103 using ascii means nothing.
void	print_ascii_chars(size_t max, const unsigned char *addr)
{
	size_t i = 0;

	while (i < 16 && i < max) // in last row, max will be less than 16!
	{
		// printf("char: %d\n", addr[i]);
		if (addr[i] >= ' ' && addr[i] <= '~') // range of printable chars / 32 to 126
		{
			write(1, addr + i, 1); // * = 42 / g = 103
		}
		else
			write(1, ".", 1);
		i++;
	}
}

void	print_memory(const void *addr, size_t size) // size = 40
{
	size_t i = 0;

	//while (i < size)
	//{
	//	printf("\n222a %c", *((unsigned char *)addr + i));
	//	i += 16;
	//}
	//i = 0;

	printf("\n222  %lu", size);
	while (i < size)
	{
		// we pass size-i, because we use up the entries of tab array, with last row less than 16 left.  
		// addr+i moves ptr to the next 16 candidates.
		print_hex_digits(size - i, addr + i); // max, addr / 40, 0 / 24, 16 / 8, 32 /
		print_ascii_chars(size - i, addr + i);
		write(1, "\n", 1);
		i += 16; // row by row
	}
}

//-----------------------
int	main(void)
{
	// input is suppose to be array of ascii values
	int	tab[10] = {0, 23, 150, 255, 12, 16,  42, 103};
	int i = 0;

	printf("\n111  %p  %lu", tab, sizeof(tab)); // 40 because 10 x 4
	print_memory(tab, sizeof(tab));
	return (0);
}

// we are restricting the range of decimal value no greater than 255
// therefore, the highest hex value is 'ff' which corresponds to 255.
// that's why we use unsigned char instead of int, 
// since the max value of unsigned char is 255.
// using int can work but it would be waste of extra memory.
// we know the max is 255, since the max of tab is 255.

// https://github.com/evandjohnston/ft_alone_in_the_dark/blob/master/Beginner_Exam/level_5/5-print_memory/README.md
