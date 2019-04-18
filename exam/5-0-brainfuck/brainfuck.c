#include <unistd.h>
#include <stdlib.h>

// THIS BELOW CODE DOES NOT WORK!!!
void	brainfuck(char *str)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(char) * 2048);
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			*ptr++; // same as ++(*ptr) ???
		else if (*str == '-')
			*ptr--; // --(*ptr) ???
		else if (*str == '[' && !*ptr)
			while (*str != ']')
				*str++;
		else if (*str == ']' && !*ptr)
			while (*str != '[')
				*str--;
		else if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
}
int		main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0])
		brainfuck(argv[1]);
	write(1, "\n", 1);
}
