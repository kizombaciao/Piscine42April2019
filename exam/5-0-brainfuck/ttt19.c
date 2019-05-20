#include <unistd.h>

void bf(char *s)
{
    int t[2048] = {0};
    int *p;
    int n;

    p = t;
    n = 0;
    while (*s)
    {
        if (*s == '>')
            p++;
        else if (*s == '<')
            p--;
        else if (*s == '+')
            ++(*p);
        else if (*s == '-')
            --(*p);
        else if (*s == '.')
            write(1, p, 1);

        else if (*s == '[' && *p == 0)
        {
            n = 1;
            while (n != 0)
            {
                s++;
                if (*s == ']')
                    n--;
                if (*s == '[')
                    n++;
                 }
        }
        else if (*s == ']' && *p != 0)
        {
            n = 1;
            while (n != 0)
            {
                s--;
                if (*s == '[')
                    n--;
                if (*s == ']')
                    n++;
            }
        }
        s++;
    }
}

int main()
{
 	bf("+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>.");
   
}