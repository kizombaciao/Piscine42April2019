/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:10:46 by cchao             #+#    #+#             */
/*   Updated: 2019/04/03 18:11:54 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc <= 0)
		return (0);
	i = 1;
	while (*(argv + i))
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			ft_putchar(*(*(argv + i) + j));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}