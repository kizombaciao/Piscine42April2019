/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:09:05 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 13:09:34 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned n)
{
	n--;
	while ((*s1 == *s2) && *s1 && *s2 && n--)
	{
		printf("\n222a:  %s  %s  %d", s1, s2, n);
		s1++;
		s2++;
		printf("\n222b:  %s  %s  %d", s1, s2, n);

	}
	printf("\n222c:  %s  %s  %d", s1, s2, n);

	return (*s1 - *s2);
}

int main()
{

	printf("\n%d", ft_strncmp("asde", "asdf", 3));

}