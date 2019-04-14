/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:17:02 by cchao             #+#    #+#             */
/*   Updated: 2019/04/11 11:28:16 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		my_argc_error_check(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int		my_print_open_failed(void)
{
	write(2, "open() failed.\n", 15);
	return (1);
}

int		my_print_close_failed(void)
{
	write(2, "close() failed.\n", 15);
	return (1);
}
