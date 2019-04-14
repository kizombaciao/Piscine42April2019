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
#include "ft_opp.h"


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
//void			ft_initialize(t_doop *opp);
int				ft_calc(t_doop *opp, int n1, char op, int n2);
int				ft_add(int n1, int n2);
int				ft_sub(int n1, int n2);
int				ft_mul(int n1, int n2);
int				ft_div(int n1, int n2);
int				ft_mod(int n1, int n2);
int				ft_usage(int n1, int n2);



#endif
