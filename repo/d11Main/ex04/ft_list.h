#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void                *data;
    struct s_list       *next;
}                       t_list;

t_list *ft_create_elem(void *data);
// creates a new element of t_list type.

void ft_list_push_back(t_list **begin_list, void *data);
// adds a new element of t_list type at the end of the list.

void ft_list_push_front(t_list **begin_list, void *data);
// adds a new element of type t_list to the beginning of the list.

//int ft_list_size(t_list *begin_list);
// returns the number of elements in the list.

t_list *ft_list_last(t_list *begin_list);
// returns the last element of the list.

void ft_print_list(t_list **begin);

# endif