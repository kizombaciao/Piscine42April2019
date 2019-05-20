/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:36:28 by angavrel          #+#    #+#             */
/*   Updated: 2019/05/13 15:35:01 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CALC_H
# define RPN_CALC_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_s
{
	int			i;
	struct s_s	*next;
}				t_s;

int		check_input(char *s);

void	rpn_calc(char *s);
void	push(t_s **stack, int i);
int		pop(t_s **stack);
int		do_op(int i, int j, char o);

int		is_op(int c);
int		is_digit(int c);
int		is_space(int c);

#endif

// Linked List, because you don't know how long the array might be!