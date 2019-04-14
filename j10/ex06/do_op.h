/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:10:48 by cchao             #+#    #+#             */
/*   Updated: 2019/04/09 19:14:43 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

# define NBOPER  5

typedef struct	s_doop
{
	char		oper;
	int			(*opfunc)(int, int);

}				t_doop;

void			ft_putchar(char c);
void			ft_putstr(char *c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_initialize(t_doop *opp);
int				ft_calc(t_doop *opp, int n1, char op, int n2);
int				ft_add(int n1, int n2);
int				ft_subtract(int n1, int n2);
int				ft_multiply(int n1, int n2);
int				ft_divide(int n1, int n2);
int				ft_modulus(int n1, int n2);

#endif
