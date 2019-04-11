#include <stdio.h>
#include <unistd.h>

#define SHIFT       'a' - 'A'

char *ft_strcapitalize(char *str)
{
    int i;
    int flag;


    flag = 1;
    i = 0;
    while (str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9') || \
            (str[i] >= 'A' && str[i] <= 'Z') || \
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(flag && (str[i] >= 'a' && str[i] <= 'z'))
            {
                str[i] -= SHIFT;
            }
            else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
            {
                str[i] += SHIFT;
            }
            flag = 0;
        }
        else
        {
            flag = 1;
        }
        i++;
    }
    


    return (str);
}

int main()
{
    int n;
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("\n111:   %s", ft_strcapitalize(str));

    return (0);
}