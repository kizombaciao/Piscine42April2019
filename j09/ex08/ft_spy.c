/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:22:04 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 14:28:35 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SHIFT   'a' - 'A'

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += SHIFT;
		}
		i++;
	}
	return (str);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_alert(char *str)
{
	char	*attack;
	char	*powers;
	char	*president;
	int		i;
	int		j;

	i = 0;
	j = 0;
	attack = "attack";
	powers = "powers";
	president = "president";
	if (ft_strcmp(str, attack) == 0 || ft_strcmp(str, powers) == 0 \
			|| ft_strcmp(str, president) == 0)
		ft_putstr("Alert!!!\n");
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		k;
	char	str[1000];

	i = 1;
	while (i < ac)
	{
		j = 0;
		k = 0;
		while (av[i][j])
		{
			if (av[i][j] != ' ')
			{
				str[k] = av[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		ft_alert(str);
		i++;
	}
	return (0);
}
