/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:13:48 by cchao             #+#    #+#             */
/*   Updated: 2019/04/14 23:13:53 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	char			*value;
}				t_btree;

int				eval_expr(char *str);
t_btree			*btree_create_node(void *value);
void			btree_construct(t_btree *node);
void			create_node(char *str, int i, t_btree *node);
int				btree_traversal(t_btree *node);
int				calculate(int a, char *op, int b);
char			*ft_first(char *str, int i);
char			*ft_last(char *str, int i);
char			*ft_get_op(char *str, int i);
char			*check_par(char *str);
char			*remove_par(char *str);
int				is_numeric(char *str);
char			*ft_trim(char *str);
int				ft_strlen(char *str);
void			ft_putnbr(int nbr);
void			ft_putchar(char c);
int ft_atoi(char *str);


#endif
