#include <stdlib.h>
#include <unistd.h>
//#include "libft.h"
/*
** replace #include libft.h with #include <stdlib.h>
** replace ft_intnew(n - 1) with protected malloc(sizeof(int) * (n));
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void ft_putnbr(int nb)
{
	int num = 0;

	// check for -2^31
	// check for negative nb

	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		ft_atoi(char *s)
{
	long	r;
	int		sign;

	while (*s == ' ' || (*s >= 9 && *s <= 13)) // check if spaces or special chars
		s++;
	sign = (*s == '-') ? -1 : 1; // sign = -1 if char is '-'
    
    //printf("\n111:  %c", *s);
	(*s == '-' || *s == '+') ? s++ : s; // why???
	//printf("\n222:  %c", *s);
    
    r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return ((int)r * sign); // type cast
}

int		*ft_range(int min, int max, int len)
{
	int n;
	int		*s;

	n = max >= min ? max - min : min - max;
	//if (!(s = ft_intnew(n - 1)))
	//	return (NULL);
	
	if(!(s = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}

int		main(int ac, char **av)
{
	int		*s;
	int		n;
	int		min;
	int		max;

	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);

    // useful trick below
	n = max >= min ? max - min + 1 : min - max + 1; // n equals ...

	if (ac != 3)
		return (0);

	s = ft_range(min, max, n);
	while (*s && n--)  // useful trick
	{
		ft_putnbr(*s++);
		ft_putchar('\n');
	}
	return (1);
}

// code not working yet!!!