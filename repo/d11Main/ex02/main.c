#include "ft_list.h"


int main()
{
    int num;
    void *data;
    t_list *t_ptr; // why only one * needed???

    num = 5;
    data = &num;
 
    t_ptr = NULL;
    ft_list_push_front(&t_ptr, data);  // why & needed for t_ptr???

    return (0);
}
