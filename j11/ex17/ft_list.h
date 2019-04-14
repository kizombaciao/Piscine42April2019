/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:42:27 by cchao             #+#    #+#             */
/*   Updated: 2019/04/10 23:03:16 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct			s_list
{
	void				*data;
	struct s_list		*next;
}						t_list;

void ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void ft_list_sort(t_list **begin_list, int (*cmp)());
void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

#endif
