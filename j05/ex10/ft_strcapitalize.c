/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:20:01 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 13:23:02 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SHIFT       'a' - 'A'

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || \
				(str[i] >= 'A' && str[i] <= 'Z') || \
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= SHIFT;
			else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += SHIFT;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
