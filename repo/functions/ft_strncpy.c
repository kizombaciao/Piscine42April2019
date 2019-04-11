/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 11:52:11 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 11:53:14 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n--)
	{
		if (*src == '\0')
		{
			*tmp++ = 0;
		}
		else
		{
			*tmp++ = *src++;
		}
	}
	return (dest);
}
