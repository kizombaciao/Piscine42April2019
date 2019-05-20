#include <unistd.h>
#include <stdio.h>

void bf(char *s)
{
	int tab[2048] = {0}; // assigns zero to entire array!
	int *p;
	int i = 0;

	p = tab; // note!!!
	while (*s)
	{
		if (*s == '>')
			p++;
		else if (*s == '<')
			p--;
		else if (*s == '+')
			(*p)++;
		else if (*s == '-')
			(*p)--;
		else if (*s == '.')
			write(1, p, 1); // note, writing p, not s
		else if (*s == '[' && *p == 0)
		{
			i = 1;
			while (i)
			{
				s++;
				if (*s == ']')
					i--;
				if (*s == '[')
					i++;
			}
		}
		else if (*s == ']' && *p != 0)
		{
			i = 1;
			while (i)
			{
				s--;
				if (*s == '[')
					i--;
				if (*s == ']')
					i++;
			}
		}
		s++;
	}
}

int main()
{
	bf("+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>.");
	if (0 != '\0')
		printf("\nZERO!");
}

// is '0' the same as '\0' if i do an if test???