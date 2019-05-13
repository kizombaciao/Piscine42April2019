#include <unistd.h>

int ib(char c)
{
	return(c == ' ' || c == '\t');
}

int isalp(char c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int up(char c)
{
	if (c >= 'a' && c <= 'z') {
		return(c - ('a' - 'A'));
	} else {
		return(c);
	}
}

int low(char c)
{
	if (c >= 'A' && c <= 'Z') {
		return(c + ('a' - 'A'));
	} else {
		return (c);
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	int len;
	char prev;

	if (ac <= 1) {
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac) {
		j = 0;
		while (av[i][j]) {
			if (isalp(av[i][j])) {
				av[i][j] = low(av[i][j]);
			}
			j++;
		}
		len = j;
		j = 0;

		prev = ' ';
		while (av[i][j]) {
			if ( (j - 1) >= 0 ) { 
				prev = av[i][j-1];
			}
			if (ib(prev)) {
				av[i][j] = up(av[i][j]);
			}
			j++;
		}
		i++;
	}

	i = 1;
	while (i < ac) {
		j = 0;
		while (av[i][j]) {
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

