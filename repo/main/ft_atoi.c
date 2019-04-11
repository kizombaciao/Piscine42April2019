#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int num;
    int neg;

    neg = 1;
    num = 0;
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r'))
    {
        ++str;
    }
    if (*str == '-')
    {
        neg = -1;
    }
    if (*str == '-' || *str == '+')
    {
        ++str;
    }
    while (*str && *str >= '0' && *str <= '9')
    {
        num = (num * 10) + (*str - '0');
        ++str;
    }
    return (num * neg);
}


int main()
{
    char text[] = "-123456789";

    printf("\n111:  %d", ft_atoi(text));


}