/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 12:23:36 by cchao             #+#    #+#             */
/*   Updated: 2019/04/11 12:31:24 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 50

int	main(int argc, char **argv)
{
	int		fd;
	int		readn;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	perror("Perror:");
	readn = lseek(fd, -512 * sizeof(char), SEEK_END);
	while (readn)
	{
		readn = read(fd, buf, BUF_SIZE);
		buf[readn] = '\0';
		write(1, buf, readn);
	}
	return (0);
}
