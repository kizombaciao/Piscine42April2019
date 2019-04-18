#include <stdio.h>
#define N 6

int getMin(int x, int y)
{
    return (x < y) ? x: y;
}
int findSubSquare(int m[N][N])
{
    int i;
    int j;
    int max = 0;
    int small;

    int h[N][N];
    int v[N][N];

    h[0][0] = (m[0][0] == 'X');
    v[0][0] = (m[0][0] == 'X');

    // FILL VALUES IN H AND V.
    i = 0;
    while (i < N)
    {
        j = 0;
        while (j < N)
        {
            if (m[i][j] == 'O') // ???
            {
                v[i][j] = 0;
                h[i][j] = 0;
            }
            else
            {
                h[i][j] = (j==0) ? 1: h[i][j-1] + 1;
                v[i][j] = (i==0) ? 1: v[i - 1][j] + 1;
            }
            j++;
        }
        i++;
    }
    // start from the bottom right corner
    i = N - 1;
    while (i >= 1)
    {
        j = N - 1;
        while (j >=1)
        {
            small = getMin(h[i][j], v[i][j]);
            while (small > max)
            {
                if (v[i][j - small + 1] >= small && h[i - small + 1][j] >= small)
                {
                    max = small;
                }
                small--;
            }
            j--;
        }
        i--;
    }
    return (max);
}

int main()
{
    int m[][N] = {{'X', 'O', 'X', 'X', 'X', 'X'}, 
                     {'X', 'O', 'X', 'X', 'O', 'X'}, 
                     {'X', 'X', 'X', 'O', 'O', 'X'}, 
                     {'O', 'X', 'X', 'X', 'X', 'X'}, 
                     {'X', 'X', 'X', 'O', 'X', 'O'}, 
                     {'O', 'O', 'X', 'O', 'O', 'O'}, 
                    };
    //char **p;

    //p = &m;

    printf("\n111  %d  %p  %p", m[0][0], &m, &m[0][0]);

    printf("\nMAX  %d", findSubSquare(m));
    return (0);
}

// https://www.geeksforgeeks.org/given-matrix-o-x-find-largest-subsquare-surrounded-x/
