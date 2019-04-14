#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	return (res * negative);
}

int main()
{

    printf("\n%d", atoi("42amis"));
    printf("\n%d", atoi("-20toto12"));

    printf("\n%d", ft_atoi("42amis"));
    printf("\n%d", ft_atoi("-20toto12"));


}