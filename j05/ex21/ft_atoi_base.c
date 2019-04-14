/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:13:33 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 23:17:58 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		base_toi(char c, const char *base)
{
	int			i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

static int		ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				valid_base(char *base)
{
	int			i;
	int			j;

	if (!base[0])
		return (0);
	if (ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int				ft_atoi_base(const char *str, char *base)
{
	int			tot;
	int			sign;
	int			i;

	if (!valid_base(base))
		return (0);
	tot = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while (base_toi(str[i], base) != -1)
	{
		tot = tot * ft_strlen(base) + base_toi(str[i], base);
		++i;
	}
	return (tot * sign);
}
