/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:21:39 by cchao             #+#    #+#             */
/*   Updated: 2019/04/04 20:24:02 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++) != '\0')
		;
	return (tmp);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*str;

	if (argc < 1)
		return (NULL);
	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		str = ft_strcat(str, "\n");
		i++;
	}
	str = ft_strcat(str, "\0");
	return (str);
}
