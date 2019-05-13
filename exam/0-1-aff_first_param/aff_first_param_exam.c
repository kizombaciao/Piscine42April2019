#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac <= 1) {
		write(1, "\n", 1);
		return (0);
	}
	while (*av[1]) {
		putchar(*av[1]);
		av[1]++;
	}
	write(1, "\n", 1);
	return (0);
}

