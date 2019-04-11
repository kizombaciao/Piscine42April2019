#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

static int	ft_power(int nb, int power)
{
	int		num;

	num = 1;
	if (power < 0)
		return (0);
	while (power--)
		num *= nb;
	return (num);
}

static int	ft_calc_dec(char *str, int base_size, int size)
{
	int		total;
	int		i;
	char	c;

	i = -1;
	c = 0;
	total = 0;
	while (str[++i])
	{
		c = str[i];
		if (str[i] >= 'A' && str[i] <= 'F')
		{
			c = 10 + (c - 'A');
			total += c * ft_power(base_size, size--);
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			c -= '0';
			total += c * ft_power(base_size, size--);
		}
	}
	return (total / base_size);
}

static char	*ft_itoa_from_base(int nbr, int base_len, char *base_to, int sign)
{
	int		len;
	int		tmp;
	char	*result;

	len = 0;
	tmp = nbr;
	while (tmp)
	{
		tmp /= base_len;
		len++;
	}
	if (!(result = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	result[len] = '\0';
	while (nbr)
	{
		result[--len] = base_to[nbr % base_len];
		nbr /= base_len;
	}
	result[0] = (sign == -1) ? '-' : result[0];
	return (result);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		b;
	int		i;
	int		len;
	int		sign;

	a = 0;
	b = 0;
	i = 0;
	len = ft_strlen(nbr);
	while (nbr[i])
	{
		if (nbr[i] == '-')
		{
			len -= 1;
			sign = -1;
		}
		i++;
	}
	return (ft_itoa_from_base(ft_calc_dec(nbr, ft_strlen(base_from), len),\
			ft_strlen(base_to), base_to, sign));
}

int main()
{
    char *s;

    s = ft_convert_base("15", "0123456789", "01");
    printf("\n111:  %s", s);

	s = ft_convert_base("10000", "01", "0123456789");
    printf("\n111:  %s", s);

	s = ft_convert_base("-31", "0123456789", "0123456789abcdef");
    printf("\n111:  %s", s);

	s = ft_convert_base("+1f", "0123456789abcdef", "0123456789");
    printf("\n111:  %s", s);

	s = ft_convert_base("0", "0123456789", "0123456789abcdef");
    printf("\n111:  %s", s);

	s = ft_convert_base("0.1234567", "0123456789", "0123456789");
    printf("\n111:  %s", s);

	s = ft_convert_base("2147483647", "0123456789", "0123456789abcdef");
    printf("\n111:  %s", s);

	s = ft_convert_base("-80000000", "0123456789abcdef", "0123456789");
    printf("\n111:  %s", s);

}

/*
TEST_STR(ft_convert_base("15", "0123456789", "01"), "1111");
TEST_STR(ft_convert_base("10000", "01", "0123456789"), "16");
TEST_STR(ft_convert_base("-31", "0123456789", "0123456789abcdef"), "-1f");
TEST_STR(ft_convert_base("+1f", "0123456789abcdef", "0123456789"), "31");
TEST_STR(ft_convert_base("0", "0123456789", "0123456789abcdef"), "0");
TEST_STR(ft_convert_base("0.1234567", "0123456789", "0123456789"), "0");
TEST_STR(ft_convert_base("2147483647", "0123456789", "0123456789abcdef"), "7fffffff");
TEST_STR(ft_convert_base("-80000000", "0123456789abcdef", "0123456789"), "-2147483648");
*/