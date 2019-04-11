/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:28:34 by cchao             #+#    #+#             */
/*   Updated: 2019/04/04 20:34:52 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		my_white_spaces(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		my_nb_words(char *str)
{
	int i;
	int flag;
	int count;

	i = 0;
	flag = 0;
	count = 0;
	while (str[i])
	{
		while (!my_white_spaces(str[i]) && str[i])
		{
			i++;
			flag = 1;
		}
		if (my_white_spaces(str[i]) || str[i] == '\0')
		{
			count += (flag == 1) ? 1 : 0;
			if (str[i] == '\0')
				return (count);
			flag = 0;
			i++;
		}
	}
	return (count);
}

int		my_word_length(char *str, int i)
{
	int j;

	j = 0;
	while (!my_white_spaces(str[i]) && str[i])
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**w;

	w = (char **)malloc(sizeof(char *) * (my_nb_words(str) + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (my_white_spaces(str[i]))
			i++;
		if (str[i])
		{
			k = 0;
			if ((w[j] = (char *)malloc(sizeof(char) \
							* (my_word_length(str, i) + 1))) == NULL)
				return (NULL);
			while (str[i] && !my_white_spaces(str[i]))
				w[j][k++] = str[i++];
			w[j++][k] = '\0';
		}
	}
	w[j] = NULL;
	return (w);
}
