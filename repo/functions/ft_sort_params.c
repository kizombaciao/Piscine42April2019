/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:29:20 by cchao             #+#    #+#             */
/*   Updated: 2019/04/03 22:13:37 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_putstr(char *str)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
	}
}

int		my_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	my_sort_ascii(int ac, char **av)
{
	int		i;
	int		flag;
	char	*tmp;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 1;
		while (i < (ac - 1))
		{
			if (my_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac < 1)
		return (0);
	my_sort_ascii(ac, av);
	i = 1;
	while (i < ac)
	{
		my_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
