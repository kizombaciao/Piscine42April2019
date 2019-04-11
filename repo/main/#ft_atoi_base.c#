#include <stdio.h>
#include <unistd.h>

static int my_is_space(char c)
{
    return (c == '\n' || c == '\n' || c == '\t' \
         || c == ' ' || c == '\f' || c == '\r' || c == '\v');
}


static int my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int run_base(const char c)
{
    int nb;

    if (c >= '0' && c <= '9')
        nb = c - '0';
    else if (c >= 'a' && c <= 'z')
        nb = c - 'a' + 10;
    else if (c >= 'A' && c <= 'Z')
        nb = c - 'A' + 10;
    else
        nb = -1;
    return (nb);
}
/*
int is_valid(char c, int index)
{
    char digits[17] = ""


}
*/
int ft_atoi_base(char *str, char *base)
{
    int neg;
    int nb;
    int index; // base index
    int running;

//    printf("\n222:  %s  %s", str, base);

    nb = 0;
    index = my_strlen(base);
    if (index < 2)
        return (0);

    while (my_is_space(*str))
         str++;

    neg = *str == '-';
    
//    printf("\n222aNEG:   %d", neg);

    str += (*str == '+' || *str == '-') ? 1 : 0;
    
    running = run_base(*str);
//    printf("\n222b:  %d   %d   %d", nb, index, running);

    while (running >= 0 && running < index)
    {
//        printf("\n222c:  %d   %d   %d", nb, index, running);
        nb = nb * index + running; // ???
        str++;
        running = run_base(*str);
    }
    return (neg ? -nb : nb);
}

int main()
{
    printf("\n111:   %d", ft_atoi_base("15", "0123456789"));
    printf("\n111:   %d", ft_atoi_base("3f", "0123456789abcdef"));
    printf("\n111:   %d", ft_atoi_base("a", "0a"));
    printf("\n111:   %d", ft_atoi_base("-15", "0123456789"));
    printf("\n111:   %d", ft_atoi_base("-111", "01"));

    printf("\n111:   %d", ft_atoi_base("a", "0"));
    printf("\n111:   %d", ft_atoi_base("1", "012341234"));
    printf("\n111:   %d", ft_atoi_base("1", "01234+"));
    printf("\n111:   %d", ft_atoi_base("5", "01234"));
    printf("\n111:   %d", ft_atoi_base("", "01234"));

    return (0);
}