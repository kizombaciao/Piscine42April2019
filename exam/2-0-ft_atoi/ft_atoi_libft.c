
int	ft_atoi(const char *s)
{
	int n;
	int sign;

	// remove spaces
	while (ft_isspace(*s++))
		;
	// adjust index	
	s--;
	// negative
	sign = 1;
	if (*s == '-')
		sign = -1;
	// adjust space for '+'
	if (*s == '+' || *s == '-')
		s++;
	// as long as it is a digit, then convert to int.	
	n = 0;
	while (ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (sign * n);
}
