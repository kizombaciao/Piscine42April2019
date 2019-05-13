#include <string.h>

void	ft_putstr(char const *str)
{
	while (*str)
		ft_putchar(*str++);
}

// ===========================

void	ft_putstr_fd(char const *s, int fd)
{
	size_t l;

	l = ft_strlen(s); // note!!!
	write(fd, s, l);
}

// =============================