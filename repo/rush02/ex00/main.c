#include "colle.h"

int main()
{
    t_rush *data;

    data = rush_create();
    data = rush_read(data);
    
    //printf("\nError Test:  %d", rush_error(data));
    
    if (rush_error(data))
    {
        ft_putstr("\nError\n");
        //printf("%d\n", data->topleft);
        //if (data->topleft == '\n')
        //    printf("\nHEY");
        return (0);
    }

    printf("\nTL=%c  TR=%c  BL=%c\n", data->topleft, data->topright, data->bottomleft);
    printf("\nW=%d   H=%d\n", data->width, data->height);
    data = rush_solve(data);
    printf("\nRush0to10:  %d\n\n", data->rush);

    rush_print(data);
    rush_destroy(data);
    return (0);
}

// read instructions carefully!!!
// what bonus features???

// always have '\n' !!!
// handle if blank!!!

// error:  should empty return 5 or '\n'???
// Can we assume empty means error rather than all rushes possible?

// delete stdio.h, printf,

// rush=5 => all
// rush=6 A__ => r2, r3, r4
// rush=7 AA_ => r2
// rush=8 AC_ => r3, r4
// rush=9 A_A => r3
// rush-10 A_C => r2, r4

