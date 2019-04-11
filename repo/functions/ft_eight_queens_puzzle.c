/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:27:13 by cchao             #+#    #+#             */
/*   Updated: 2019/03/30 22:32:05 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_safe(int board[8], int column, int row)
{
	int i;

	i = -1;
	while (++i < column)
	{
		if (row == board[i] || i + board[i] == column + row \
				|| i - board[i] == column - row)
		{
			return (0);
		}
	}
	return (1);
}

void	recursive_check(int board[8], int *count, int pos_col)
{
	int i;

	if (pos_col == 8)
	{
		*count += 1;
	}
	else
	{
		i = -1;
		while (++i < 8)
		{
			if (is_safe(board, pos_col, i))
			{
				board[pos_col] = i;
				recursive_check(board, count, pos_col + 1);
			}
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int board[8];
	int i;
	int count;

	i = -1;
	while (++i < 8)
	{
		board[i] = -1;
	}
	count = 0;
	recursive_check(board, &count, 0);
	return (count);
}
