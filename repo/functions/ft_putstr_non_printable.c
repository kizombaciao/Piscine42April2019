#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

static void	print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void ft_putstr_non_printable(char *str)
{
    int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}

int main()
{
    ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
    //$expected = 'asdf\\7f\\1fhi\\01\\fflol';
    return (0);
}