#include <stdio.h>
#include <unistd.h>

// Need to declare whatever you will call!!!
char    **ft_split_whitespaces(char *str); 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_print_words_tables(char **tab)
{
    int i;

    i = 0;
    while (tab[i] != NULL)
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    int i;
    char **str;

    str = ft_split_whitespaces("ttt yyyy");

//    str = ft_split_whitespaces("test this\tagain\nplease.");


    ft_print_words_tables(str);

}