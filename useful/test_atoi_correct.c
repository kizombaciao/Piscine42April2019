#include <stdlib.h>
#include <stdio.h>

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

    printf("\n222:  %s", &str[i]);

  	base = 0;
  	while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      	base = base * 10 + (str[i++] - '0');
    }
  	return (sign * base);
}

int main()
{

    printf("\n%d", atoi("42amis"));
    printf("\n%d", atoi("-20toto12"));

    printf("\n%d", ft_atoi("42amis"));
    printf("\n%d", ft_atoi("-20toto12"));


}