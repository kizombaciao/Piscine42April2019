int ft_is_space(char c)
{
	return (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\f' || c == '\r');
}

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	i = 0;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	nb = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

