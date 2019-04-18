#include "cchao.h"

int main()
{
    // why couldn't i pass arr to ft_any()???
    //char arr[4][10] = {"blue", "red", "orange", "yellow"};
    int num;
    int i;
    char **p;
    //char *c;

    p = (char **)malloc(sizeof(char *) * 3);
    i = 0;
    while (i < 2)
    {
        p[i] = (char *)malloc(sizeof(char) * 6);
        p[i] = "42";
        i++;
    }
    p[i] = NULL;

    num = ft_any(p, &func);
    printf("\n111   %d", num);

    return (0);
}