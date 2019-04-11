/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 23:10:32 by cchao             #+#    #+#             */
/*   Updated: 2019/03/30 23:20:38 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	print_queen_positions(int board[8])
{
	int i;

	i = -1;
	while (++i < 8)
	{
		ft_putchar(board[i] + '1');
	}
	ft_putchar('\n');
}

void	recursive_check(int board[8], int pos_col)
{
	int i;

	if (pos_col == 8)
	{
		print_queen_positions(board);
	}
	else
	{
		i = -1;
		while (++i < 8)
		{
			if (is_safe(board, pos_col, i))
			{
				board[pos_col] = i;
				recursive_check(board, pos_col + 1);
			}
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int board[8];
	int i;

	i = -1;
	while (++i < 8)
	{
		board[i] = -1;
	}
	recursive_check(board, 0);
}
