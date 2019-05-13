#include <stdlib.h>

int ft_int_length(int nb)
{
	int i;
	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int len;
	char *s;

	if (nbr == 0)
	{
		len = 1;
		if(!(s = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	if (nbr == -2147483648)
	{
		len = 11;
		if(!(s = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		s[0] = '-';
		s[1] = '2';
		nbr = 147483648;
		s[len] = '\0';
		len--;
		while (len > 1)
		{
			s[len] = nbr % 10 + '0';
			nbr /= 10;
			len--;
		}
		return (s);
	}
	else
	{
		len = ft_int_length(nbr);
		if(!(s = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	if (nbr < 0)
	{
		s[0] = '-';
		len--;
		nbr *= -1;
		s[len] = '\0';
		while (len > 0)
		{
			s[len] = nbr % 10 + '0';
			nbr /= 10;
			len--;
		}
	}
	else
	{
		s[len] = '\0';
		len--;
		while (len >= 0)
		{
			s[len] = nbr % 10 + '0';
			nbr /= 10;
			len--;
		}
	}
	return (s);
}


