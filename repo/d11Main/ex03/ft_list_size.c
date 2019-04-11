#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
     int i;
    t_list *list;

    i = 0;
    if (!begin_list)
        return (i);
    list = begin_list;
    while (list)
    {
        list = list->next;
        i++;
    }
    return (i);
}

int main()
{
    t_list *t_ptr;

    t_ptr = NULL;

    // trying adding a few list to see if you can get else besides zero!

    printf("\n%d", ft_list_size(t_ptr));

}

// returns the number of elements in the list
// given that we are passed the ptr to the beginning.