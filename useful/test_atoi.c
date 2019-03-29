// may be move file to scratch

int ft_atoi(char *str)
{
    int num;
    int neg;

    neg = 1;
    num = 0;

    // also check for n, t, v, f, r
    while (*str && *str == ' ')
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
    return (neg * num);
}