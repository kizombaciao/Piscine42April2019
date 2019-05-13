int ft_atoi(const char *str)
{
	int num;
	int neg;
	int i;

	num = 0;
	neg = 1;
	i = 0;
	while (str[i] && ((str[i] == ' ') || (str[i] == '\n') ||	\
		   (str[i] == '\t') || (str[i] == '\v') || \
					  (str[i] == '\f') || (str[i] == '\r')))
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (neg * num);
}

