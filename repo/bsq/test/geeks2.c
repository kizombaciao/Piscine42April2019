#include <stdio.h>

#define bool int
#define R 6
#define C 5

void bsq_print(int max_i, int max_j, int max_of_s, int m[R][C])
{
    int i, j;

    printf("Maximum size sub-matrix is:  \n");
    i = max_i;
    while (i > max_i - max_of_s)
    {
        j = max_j;
        while(j> max_j - max_of_s)
        {
            printf("%d ", m[i][j]);
            j--;
        }
        printf("\n");
        i--;
    }
}

int min(int a, int b, int c)
{
    int m = a;
    if (m > b)
        m = b;
    if (m > c)
        m = c;
    return (m);
}

void printMaxSubSquare(bool m[R][C])
{
    int i, j;
    int s[R][C];
    int max_of_s, max_i, max_j;

    // set 1st col of s[][]
    i = 0;
    while (i < R)
    {
        s[i][0] = m[i][0];
        i++;
    }
    // set 1st row of s[][]
    j = 0;
    while (j < C)
    {
        s[0][j] = m[0][j];
        j++;
    }
    // construct the rest of s[][]
    i = 1;
    while (i < R)
    {
        j = 1;
        while (j < C)
        {
            if (m[i][j] == 1)
                s[i][j] = min(s[i][j-1], s[i-1][j], s[i-1][j-1]) + 1;
            else
                s[i][j] = 0;
            j++;
        }
        i++;
    }
    // find max entry and its indices
    max_of_s = s[0][0];
    max_i = 0;
    max_j = 0;
    i = 0;
    while (i < R)
    {
        j = 0;
        while (j < C)
        {
            if (max_of_s < s[i][j])
            {
                max_of_s = s[i][j];
                max_i = i;
                max_j = j;
            }
            j++;
        }
        i++;
    }
    bsq_print(max_i, max_j, max_of_s, m);
}

int main()
{
    bool m[R][C] = {{0, 1, 1, 0, 1},  
                    {1, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 0}, 
                    {1, 1, 1, 1, 0}, 
                    {1, 1, 1, 1, 1}, 
                    {0, 0, 0, 0, 0}}; 
                  
    printMaxSubSquare(m); 
}