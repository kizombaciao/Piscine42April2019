#include "ft_list.h"

int main()
{
    int num;
    void *data;
    t_list *t_ptr; // Note!!!

    num = 5;
    data = &num;
    t_ptr = NULL;

    ft_list_push_back(&t_ptr, data); // Note!!!
    printf("\n111  %d", *(char *)t_ptr->data);

    return (0);
}

// the code is gettin seg default!!!
// see ex02 for solution!!!