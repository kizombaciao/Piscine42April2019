/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 23:11:27 by cchao             #+#    #+#             */
/*   Updated: 2019/04/17 23:23:58 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define BUF_SIZE 100
# define OBSTACLE 0
# define EMPTY 1
# define C 10000

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct			s_bsq
{
	int					nrow;
	int					ncol;
	char				symbol[3];
	int					**m;
	int					**s;
	int					max;
	int					max_i;
	int					max_j;
	int					*maxi;
	int					*maxj;
	int					maxindex;
}						t_bsq;

t_bsq					*bsq_read(char *fn, t_bsq *p);
int						bsq_read_title(int fd, t_bsq *p);
t_bsq					*bsq_read_body(int fd, t_bsq *p);
int						bsq_next_readline(int fd);
t_bsq					*bsq_read_stdin(t_bsq *p);
t_bsq					*bsq_read_body_stdin(int fd, t_bsq *p);
t_bsq					*bsq_create_struct();
t_bsq					*bsq_construct(char *fn, t_bsq *p);
t_bsq					*bsq_initialize_array(t_bsq *p);
void					bsq_free(t_bsq *p);
t_bsq					*bsq_solve(t_bsq *p);
t_bsq					*bsq_solve_setup(t_bsq *p);
t_bsq					*bsq_solve_max(t_bsq *p);
t_bsq					*bsq_solve_multiple_candidates(t_bsq *p);
t_bsq					*bsq_solve_max_ij(t_bsq *p);
t_bsq					*bsq_solve_multiple_candidates(t_bsq *p);
void					bsq_print_full_symbol(t_bsq *p);
void					bsq_print_empty_or_obstacle(t_bsq *p, int nb);
void					bsq_print_result(int max_i, int max_j, t_bsq *p);
int						ft_open_error(int fd);
int						ft_close_error(int fd);
int						bsq_min(int a, int b, int c);
int						bsq_if_dot(char c, t_bsq *p);
int						ft_argc_error(int argc);
int						ft_is_num(char c);
void					ft_putchar(char c);
void					ft_putnbr(int nb);
void					ft_putstr(char *str);

#endif
