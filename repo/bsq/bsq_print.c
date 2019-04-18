#include "bsq.h"

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