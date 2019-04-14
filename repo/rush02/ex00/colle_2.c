#include "colle.h"

t_rush *rush_create()
{
    t_rush *data;

    data = (t_rush *)malloc(sizeof(t_rush));
    data->rush = -1;
    data->width = 0;
    data->height = 0;
    data->topleft = '\0';
    data->topright = '\0';
    data->bottomleft = '\0';
    return (data);
}

void rush_destroy(t_rush *data)
{
    free(data);
}

t_rush *rush_read(t_rush *data)
{
    int i;
    int j;
    char c;
    char prev;

    i = 0;
    j = 0;
    
    printf("\nReading...\n");        

    while (read(0, &c, 1) > 0)
    {
        //printf("%c", c);
        write(1, &c, 1);
        if (data->topleft == '\0')
        {
            data->topleft = c;
        }
        if (c == '\n' && i == 0 && j > 1)
        {
            data->topright = prev;
        }
        if (c == '\n')
            i++;
        if (i == 0)
            j++;
        if (prev == '\n')
            data->bottomleft = c;
        prev = c;
    }
    data->width = j;
    data->height = i;
    return (data);
}

t_rush *rush_solve(t_rush *data)
{
    if (data->topleft == 'o')
        data->rush = 0;
    if (data->topleft == '/')
        data->rush = 1;
    if (data->topleft == 'A' && data->topright == 'A' && data->bottomleft == 'C')
        data->rush = 2;
    if (data->topleft == 'A' && data->topright == 'C' && data->bottomleft == 'A')
        data->rush = 3;
    if (data->topleft == 'A' && data->topright == 'C' && data->bottomleft == 'C')
        data->rush = 4;
    if (data->topleft == '\0' && data->topright == '\0' && data->bottomleft == '\0')
        data->rush = 5;
    if (data->topleft == 'A' && data->topright == '\0' && data->bottomleft == '\0')
        data->rush = 6;
    if (data->topleft == 'A' && data->topright == 'A' && data->bottomleft == '\0')
        data->rush = 7;
    if (data->topleft == 'A' && data->topright == 'C' && data->bottomleft == '\0')
        data->rush = 8;
    if (data->topleft == 'A' && data->topright == '\0' && data->bottomleft == 'A')
        data->rush = 9;
    if (data->topleft == 'A' && data->topright == '\0' && data->bottomleft == 'C')
        data->rush = 10;
    return (data);
}

int rush_error(t_rush *data)
{
    return ((data->topleft != 'o' && data->topleft != '/' && data->topleft != 'A') 
            || (data->topright != '\0' && data->topright != 'A' && data->topright != 'C' 
            && data->topright != 'o' && data->topright != '\\')            
            || (data->bottomleft != '\0' && data->bottomleft != 'A' && data->bottomleft != 'C' 
            && data->bottomleft != 'o' && data->bottomleft != '\\'));
}
