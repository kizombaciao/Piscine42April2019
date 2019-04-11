#include "ft_list.h"

int main()
{
    t_list *t_ptr;
    void *data;  // also, try with void!!! 
    int num = 5;
    char c = 'c';

    //data = &num;
    data = &c;

    t_ptr = ft_create_elem(data);
    //printf("\n%d", *(int *)(t_ptr->data));
    printf("\n%c", *(char *)(t_ptr->data));

    return (0);
}