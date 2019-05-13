#include <stdio.h>

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

int is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int largest_prime(int nb)
{
	int i;

	i = nb - 1;
	while (i >= 2)
	{
		if (is_prime(i) && nb % i == 0)
		{
			//printf("\nlargest prime  %d", i);
			return (i);
		}
		i--;
	}
	return (0);
}

void find_primes(int nb)
{
	int i;
	int num;
	int flag;

	num = largest_prime(nb);
	//printf("\nlargest prime2  %d", num);
	flag = 0;
	i = 2;
	while (i < nb)
	{
		if (is_prime(i) && nb % i == 0)
		{
			printf("%d", i);
			if (i == num)
			{
				printf("\n");
			}		
			else
				printf("*");
			nb = nb / i;
			i = 2;
			flag = 1;
		}	
		i++;
	}
	if (flag == 0)
		printf("%d\n", nb);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}

	find_primes(ft_atoi(av[1]));
	//printf("\n");
}


