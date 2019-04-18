/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:28:40 by cchao             #+#    #+#             */
/*   Updated: 2019/04/11 11:29:08 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 3

int		my_argc_error_check(int argc);
int		my_print_open_failed(void);
int		my_print_close_failed(void);

#endif