#include <stdio.h>

int isb(char c)
{
	if (c <= ' ')
		return (1);
	return (0);
}
int hx(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}
int is_h(char c, int b)
{
	int i;
	char h1[] = "0123456789abcdef";
	char h2[] = "0123456789ABCDEF";

	i = 0;
	while (i < b)
	{
		if ((h1[i] == c) || (h2[i] == c))
			return (1);
		i++;
	}
	return (0);
}
int ft_atoi_base(char *s, int b)
{
	int i;
	int n;
	int sign;

	i = 0;
	while (isb(s[i]))
		i++;
	sign = 1;
	if (s[i] == '-')
		sign = -1;
	(s[i] == '-' || s[i] == '+') ? ++i : 0; // elegant code
	n = 0;
	while (is_h(s[i], b) && s[i])
	{
		n = n * b + hx(s[i]);
		i++;
	}
	return (sign * n);
}
int main()
{
	printf("\n%d", ft_atoi_base("-FF", 16)); //from 16 to 10
}