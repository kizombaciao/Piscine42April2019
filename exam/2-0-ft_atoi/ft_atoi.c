#include <stdio.h> //

// skip any spaces in the beginning
// take account of negative number
// check if positive '+' is used
// then, you can convert the string to int

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13)) /* skip special chars */
		s++;
	if (*s == '-') /* check if negative number */
	{
		sign = -1;
		s++;
	}
	if (*s == '+') /* check if positive char used */
		s++;
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}
int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAA876greghrsth";// outputs -5234, ignores 876
	printf("%d\n",ft_atoi(a));
}

