#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int nb;

    i = 0;
    
    // ntv_fr
    while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' \
        || str[i] == ' ' || str[i] == '\f' || str[i] == '\r'))
    {
        i++;
    }
    printf("\n222:  %s", &str[i]);

    sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        i++;
    }

    printf("\n222b:  %s", &str[i]);

    nb = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (sign * nb);
}

// NOTE, THE FUNCTION DOES NOT CHECK FOR NTV_FR AFTER NUMBERS

int main()
{
    int n;
    char c;

    printf("\n111:   %d", ft_atoi("256a99999"));

    return (0);
}