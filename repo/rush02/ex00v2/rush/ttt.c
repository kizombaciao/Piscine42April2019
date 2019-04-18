
/*
    if (read(0, &c, 1) <= 0)
    {
        data->rush = 5;
        printf("/nBLANK");
    }

    if (data->rush == 0)
        //printf("[rush-00] [%d] [%d]\n", data->width, data->height);   

    if (data->rush == 6)
        printf("[rush-02] [%d] [%d] || [rush-03] [%d] [%d] || [rush-04] [%d] [%d]\n", data->width, data->height, data->width, data->height, data->width, data->height);   

        ft_putstr("[rush-02] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] || [rush-03] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("] || [rush-04] [");
        ft_putnbr(data->width);
        ft_putstr("] [");
        ft_putnbr(data->height);
        ft_putstr("]\n");


    //printf("\nTL=%c  TR=%c  BL=%c\n", data->topleft, data->topright, data->bottomleft);
    //printf("\nW=%d   H=%d\n", data->width, data->height);

    //printf("\nRush0to10:  %d\n\n", data->rush);


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



*/