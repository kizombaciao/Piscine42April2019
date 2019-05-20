#include <stdio.h>

int check(char a, char b)
{
    if (a == '(' && b == ')')
        return (1);
    else if (a == '[' && b == ']')
        return (1);
    else if (a == '{' && b == '}')
        return (1);
    return (0);
}

int b(char *s)
{
    char buf[1000];
    char c;
    int i = 0;
    int n = 0;

    while (s[i])
    {
        c = s[i];
        if (c == '(' || c == '[' || c == '{')
        {
            n++;
            buf[n] = c;
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (n < 0 || check(buff[n], c) == 0)
                continue ;
               
        }

        i++;
    }


}

int main(int ac, char **av)
{
    int i = 0;

    if (ac > 1)
    {
        while (++i < ac)
        {
            b(av[i]);
        }
    }
}

