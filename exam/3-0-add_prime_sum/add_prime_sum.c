#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}
// note, how short putnbr can be!
void	ft_putposnbr(int n) {
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
// note, how short atoi can be!
int		ft_atoi_nc(char *s) {
	int		r;
	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}
// trick: to check if prime
int is_prime(int n) {
	int i;
	i = 2; // start at 2
	while (i < n) // try every digit up to n
		if (!(n % i++)) // if there is a divisor, as long as zero
			return (0); // not a prime
	return (1); // a prime, since no divisor was found
}
void	add_prime_sum(int n) {
	int	i;
	int	count;
	count = 0;
	if (n == 1) // 1 is not a prime!!!
		count = 0;
	i = 1;
	while (++i <= n) // trick: to find prime inferior
		if (is_prime(i))
			count += i; // cummulatively add prime inferiors
	ft_putposnbr(count);
}

int		main(int ac, char **av) {
	if (ac == 2 && ft_atoi_nc(av[1]) > 0)
		add_prime_sum(ft_atoi_nc(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (1);
}
