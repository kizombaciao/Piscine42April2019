#include "ft_list.h"


void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *curr;

    curr = begin_list;

    while (curr) // I don't see curr->next can work!!!
    {
        f(curr->data);
        curr = curr->next;
    }

}

int main()
{

// (*f)(list_ptr->data)


}

