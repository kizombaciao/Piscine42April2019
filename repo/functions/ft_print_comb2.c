/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 14:36:35 by cchao             #+#    #+#             */
/*   Updated: 2019/03/28 14:39:23 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_print(int d1, int d2)
{
	ft_putchar('0' + (d1 / 10));
	ft_putchar('0' + (d1 % 10));
	ft_putchar(' ');
	ft_putchar('0' + (d2 / 10));
	ft_putchar('0' + (d2 % 10));
	if (d1 != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int d1;
	int d2;

	d1 = -1;
	while (d1++ < 98)
	{
		d2 = d1;
		while (d2++ < 99)
		{
			my_print(d1, d2);
		}
	}
}
