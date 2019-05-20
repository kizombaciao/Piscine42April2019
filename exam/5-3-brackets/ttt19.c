#include <unistd.h>


static int match(char a, char b)
{
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='(' && b==')'));
}


static int br(char *s)
{
    i = 0;
    top = 0;
    while (s[i])
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[++top] = s[i];
        if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            if (!match(stack[top--], s[i]))
                return (0);
        i++;
    }
    return (!top);
}

int main()
{
    int i;

    i = 0;
    while (--ac)
    {
        if (br(av[++i]))
            // ok
        else
        {
            // error
        }
    }   
}