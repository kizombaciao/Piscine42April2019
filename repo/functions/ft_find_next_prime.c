/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:43:13 by cchao             #+#    #+#             */
/*   Updated: 2019/03/30 17:58:54 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAXF 2147483647

int		ft_is_prime(int nb)
{
	int guess;

	if (nb <= 1)
	{
		return (0);
	}
	guess = 2;
	while (guess < nb)
	{
		if (nb % guess == 0)
		{
			return (0);
		}
		guess++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int guess;

	guess = nb;
	while (guess < MAXF)
	{
		if (ft_is_prime(guess))
		{
			return (guess);
		}
		guess++;
	}
	return (0);
}
