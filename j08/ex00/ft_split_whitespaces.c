/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 22:17:06 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 22:17:15 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		my_delimit(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		my_length_word(char *str, int *len_word)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	temp = 0;
	while (str[i])
	{
		if (my_delimit(str[i]))
		{
			len_word[j] = i - temp;
			temp = i + 1;
			j++;
		}
		i++;
	}
	len_word[j] = i - temp;
	return (j + 1);
}

void	my_split_white(int num_words, char **arr, int *len_word, char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i <= num_words)
	{
		j = 0;
		if (i == num_words)
			arr[i][j] = '0';
		else
		{
			while (j <= len_word[i])
			{
				if (j == len_word[i])
					arr[i][j] = '\0';
				else
					arr[i][j] = str[k];
				j++;
				k++;
			}
		}
		i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		j;
	int		num_words;
	int		len_word[100];
	char	**arr;

	num_words = my_length_word(str, len_word);
	arr = (char **)malloc((num_words + 1) * sizeof(char *));
	j = 0;
	while (j < num_words)
	{
		arr[j] = (char *)malloc((len_word[j] + 1) * sizeof(char));
		j++;
	}
	my_split_white(num_words, arr, len_word, str);
	return (arr);
}
