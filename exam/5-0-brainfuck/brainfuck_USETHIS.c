#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void brainfuck(char *str)
{
    int tab[2048] = {0};
    int *ptr;
    int loop_count;

    ptr = tab;
    loop_count = 0;
    while (*str)
    {
        if (*str == '>')
            ptr++;
        else if (*str == '<')
            ptr--;
        else if (*str == '+')
            ++(*ptr);
        else if (*str == '-')
            --(*ptr);

        else if (*str == '.')
            write(1, ptr, 1); // note, how ptr can be used in write()

        else if (*str == '[' && *ptr == 0)
        {
            loop_count = 1;
            while (loop_count != 0)
            {
                str++;
                if (*str == ']')
                    --loop_count;
                if (*str == '[')
                    ++loop_count;
            }
        }
        else if (*str == ']' && *ptr != 0) // for brackets in reverse!
        {
            loop_count = 1;
            while (loop_count != 0)
            {
                str--;
                if (*str == '[')
                    --loop_count;
                if (*str == ']')
                    ++loop_count;
            }
        }
        str++;
    }
}

// ./aaa "abcdef"
void test1(char *str)
{
    char *p;

    p = str;
    //p++;
    str++;
    printf("\n%c %c %c %c", ++(*str), (*str)++, (*str), *(str));
    //output:  c c d d
}

// ./aaa "abcdef"
void test2(char *str)
{
    char *p;

    p = str;
    p++;
    printf("\n%c %c %c %c", (*p), (*p), (*p), ++(*p));
    // output: b b b c
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        test(argv[1]);
       //brainfuck(argv[1]);
    return (0);
}
