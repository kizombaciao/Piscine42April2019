#include <unistd.h>

int main()
{
	char c;
	char tmp;

	c = 'a';
	while (c <= 'z')
	{
		if (c % 2 == 0)
		{
			tmp = c - ('a' - 'A');
			write(1, &tmp, 1);
		}
		else
		{
			write(1, &c, 1);
		}
		c++;
	}
	tmp = '\n';
	write(1, &tmp, 1);
	return (0);
}


