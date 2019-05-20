#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE (4096)

static int	match_brackets(char a, char b)
{
	return ((a == '[' && b == ']') || (a == '{' && b == '}') \
				|| (a == '(' && b == ')'));
}

// trick: it uses push and pop stack 
static int	check_brackets(char *str)
{
	int		i;
	int		top;
	int		stack[BUFF_SIZE];
//	int		t;

	i = 0;
	top = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			top++;
			stack[top] = str[i];
		}
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			//printf("\n222a %d", match_brackets(stack[top], str[i]));
			//t = match_brackets(stack[top], str[i]);
			if (!match_brackets(stack[top--], str[i]))
				return (0);
		}
		i ++;
	}
	return (!top);
}

int			main(int argc, char *argv[])
{
	check_brackets("([11])");

/*
	int		i;

	i = 0;
	if (argc == 1)
		write(1, "\n", 1);
	while (--argc)
	{
		if (check_brackets(argv[++i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	}
	return (0);
*/
}

