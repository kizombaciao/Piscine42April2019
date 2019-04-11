#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void                *data;
    struct s_list       *next;
}                       t_list;

//t_list *ft_create_elem(void *data);
//void ft_list_push_back(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);


# endif