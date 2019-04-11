/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:11:34 by cchao             #+#    #+#             */
/*   Updated: 2019/04/02 20:14:16 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				my_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dest[i +j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';

	printf("\n333:  %s", dest);	
	return (i + my_strlen(src));
}

int main()
{
    char s1[256] = "\0zxcvzxcvzxcvxzcvzxcv";
    //char s2[] = "asdf";


    printf("\n111:   %d", ft_strlcat(s1, "asdf", 16));
    printf("\n111:   %d", ft_strlcat(s1, "asdf", 6));
    printf("\n111:   %d", ft_strlcat(s1, "asdf", 4));
    printf("\n111:   %d", ft_strlcat(s1, "", 16));
    printf("\n111:   %d", ft_strlcat(s1, "asdf", 0));



    return (0);
}