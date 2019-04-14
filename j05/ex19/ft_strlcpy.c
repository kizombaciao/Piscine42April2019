/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:47:22 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 21:48:31 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = my_strlen(src);
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
	}
	if (size >= 1)
		*dest = '\0';
	return (i);
}
