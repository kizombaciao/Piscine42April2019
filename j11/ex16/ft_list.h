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

#include <stdlib.h>

typedef struct			s_list
{
	void				*data;
	struct s_list		*next;
}						t_list;

t_list					*ft_create_elem(void *data);
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

#endif
