#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
t_list *create_node(void *data)
{
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    p->data = data;
    p->next = NULL;
    return (p);
}
// https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
// this function to append at the end is NOT WORKING!!!
t_list *append_node(t_list *head, void *data_ref)
{
    t_list *p;

    p = head;
    while (p)
    {
        p = p->next;
    }
    p = (t_list *)malloc(sizeof(t_list));
    p->data = data_ref;
    p->next = NULL;
    return (head);
}
t_list *add_node_to_front(t_list *head, void *data_ref)
{
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    p->data = data_ref;
    p->next = head;
    head = p;
    return (head);
}
void print_list(t_list *head)
{
    t_list *p;

    p = head;
    while (p)
    {
        printf("\n333  %d", *(int *)p->data);
        p = p->next;
    }
}
int func(void *p1, void *p2)
{
    if (*(int *)p1 == *(int *)p2)
        return (0);
    return (1);    
}
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *t;
    t_list *p;
    t_list *remove;

    t = *begin_list; // note, pointer math!!!
    p = *begin_list;
    if (!t)
        return ;
    while (t)
    {
        if (!cmp(data_ref, t->data))
        {
            remove = t;
            p->next = t->next;
            free(remove);
            return ;
        }
        p = t;
        t = t->next;
    }
}
int main()
{
    int d1 = 3;
    int *p1 = &d1;
    int d2 = 2;
    int *p2 = &d2;
    int d3 = 1;
    int *p3 = &d3;

    t_list *h;

    h = create_node(p1);
    //h = append_node(h, p2); // since &p1 is the content of **begin_list
    //h = append_node(h, p3);
    h = add_node_to_front(h, p2);
    h = add_node_to_front(h, p3);
    print_list(h);
    ft_list_remove_if(&h, p2, &func); // Note, &func!!!
    print_list(h);
}



/*
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>

// https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/
// https://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/

*/