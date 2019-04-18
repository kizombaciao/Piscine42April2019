#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
    int i = 0;
    while (*str) {
        /*
        printf("\nbefore:  %p", str++);
         note, str++ prints the letter and then increments,
         and, ++str first increments and then prints.
		*/
        write(1, str++, 1);
        printf("\nafter:%d    %p", i, str);
        i++;
    }
}
int main()
{
    ft_putstr("test");
    
}
/*
void ttt()
{
    while (*str) {
        write(1, str++, 1);
        
    }
}

