/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:49:37 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/13 21:02:17 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "temp.h"

int		valid_input(char *s, int rows, int cols)
{
	int a;
	int b;
	int i;

	a = 0;
	i = 0;
	while (s[i] != '\0')
	{
		b = 0;
		while (b < cols && s[i] != '\0')
		{
			i++;
			b++;
		}
		if (s[i] != '\n')
		{
			write(1, "aucune\n", 7);
			return (0);
		}
		a++;
		i++
	}
	if (a < rows)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	return (1);
}
