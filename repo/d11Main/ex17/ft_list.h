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
int ft_list_size(t_list *begin_list);
// returns the number of elements in the list.
t_list *ft_list_last(t_list *begin_list);
// returns the last element of the list.
t_list *ft_list_push_params(int ac, char **av);
// creates a new list that includes command-line arguments.
void ft_list_clear(t_list **begin_list);
// clears all links from the list.
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
// returns Nth element of the list.
void ft_list_reverse(t_list **begin_list);
// reverses the order of a list's elements.
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
// applies a passed function to the info within each of the list's link.
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *));
// applies a passed function to the info of the list's link if the condition is met.
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
// returns the address of the first link, whose dta is 'equal' to the ref data.
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
// erases list's elements that are 'equal' to the ref data.
void ft_list_merge(t_list **begin_list1, t_list *begin_list2);
// appends list begin2 to the end of list begin1.
void ft_list_sort(t_list **begin_list, int (*cmp)());
// sorts the list's contents by ascending order, using passed function.
void ft_list_reverse_fun(t_list *begin_list);
// reverses the order of the elements of the list.
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
// creates a new element and inserts it such that the list remains sorted.
void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());
// merges begin2 list into begin1 list, such that the aggregated list remains sorted.

//void ft_print_list(t_list **begin);

# endif