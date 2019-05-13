#include <unistd.h>

int is_blank(char c)
{
	return(c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
	int len = 0;
	int i = 0;

	if (ac != 2) {
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i]) {
		i++;
	}
	len = i - 1;
	while (is_blank(av[1][len])) {
		len--;
	}
	while (len >= 0  && !is_blank(av[1][len])) {
		len--;
	}
	len++;
	while (!is_blank(av[1][len]) && av[1][len]) {
		write(1, &av[1][len], 1);
		len++;
	}
	write(1, "\n", 1);
	return (0);
}

