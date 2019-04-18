#include "do-op.h"

int ft_atoi(char *str)
{
  	int i;
  	int sign;
  	int base;

  	i = 0;
  	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		{
    	i++;
    }
  	sign = 1;
  	if (str[i] == '-' || str[i] == '+')
    {
			sign = 1 - 2 * (str[i++] == '-');
    }
  	base = 0;
  	while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      	base = base * 10 + (str[i++] - '0');
    }
  	return (sign * base);
}