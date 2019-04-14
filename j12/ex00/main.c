/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:29:21 by cchao             #+#    #+#             */
/*   Updated: 2019/04/11 11:29:25 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		read_n;
	char	buf[BUF_SIZE + 1];

	if (my_argc_error_check(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (my_print_open_failed());
	read_n = 1;
	while (read_n)
	{
		read_n = read(fd, buf, BUF_SIZE);
		buf[read_n] = '\0';
		write(1, buf, read_n);
	}
	if (close(fd) == -1)
		return (my_print_close_failed());
	return (0);
}
