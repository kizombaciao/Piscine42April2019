/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:31:27 by lusanche          #+#    #+#             */
/*   Updated: 2019/04/13 21:14:27 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "temp.h"

#define BUF 4048

int		main(void)
{
	char buf[BUF + 1];
	int ret;

	ret = read(0, buf, BUF);
	if (ret == 0)
	{
		return (1);
	}
	buf[ret] = '\0';
	if (valid_input(buf, rows(buf), cols(buf))
			//analyzing corners
			//printing output
}
