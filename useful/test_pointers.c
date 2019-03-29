


int main()
{

    int t[10];
    int t2[10];
    int *tptr[2];

    tptr[0] = t;
    tptr[1] = t2;

    // to create 2d int array, we need two 1d int array and one 1d int ptr array.
    tptr[1][3] = 42;
    *(tptr[1] + 3) = 42;
    *(*(tptr + 1) + 3) = 42;
}

