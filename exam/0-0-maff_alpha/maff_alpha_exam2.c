#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int main()
{

	ft_putstr("aBcDeFgHiJkLmNoPqRsTuVwXyZ\n");
	return (0);
}
