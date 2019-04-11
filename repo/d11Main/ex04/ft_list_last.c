#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *listptr;

    if (!begin_list)
        return (begin_list);

    listptr = begin_list;
    while (listptr->next) // note, we are checking next now to find the end!
    {
        listptr = listptr->next;
    }
    return (listptr);
}

void ft_print_list(t_list **begin)
{
    t_list *tmp = *begin; // note, one * !!!

    while (!tmp)
    {
        int *a = tmp->data;
        printf("\n555  %d", *a);
        printf("\n555  %d", *(int *)tmp->data);
        tmp = tmp->next;
    }
}

int main()
{
    t_list *begin_list;
    t_list *t_list;

    int a00 = 10;
    int a01 = 10;
    int b01 = 7;
    int c01 = 5;
    int d01 = 13;

    int *data;
    data = &a01;


    printf("\n111a");
    t_list = ft_create_elem(&a00);
    printf("\n111b %p", t_list);

    begin_list = t_list;

    ft_list_push_back(&t_list, data); // note, the &!!!
    printf("\n111c");
    ft_list_push_front(&t_list, &b01);
    printf("\n111d");

    ft_list_push_front(&t_list, &c01);
    printf("\n111e");

    ft_list_push_back(&t_list, &d01);
    printf("\n111f");

    ft_print_list(&begin_list);

/*
    if (!ft_list_last(t_ptr))
    {
        printf("\n111:  NULL");  // fix!!!
    }
    else
    {
        printf("\n111:  %p", ft_list_last(t_ptr));
    }
*/
    return (0);
}

// COULD NOT PRINT THE LIST!!!
// https://github.com/MrRobb/42_piscine/blob/master/day11/main.c



// returns the last element of the list

