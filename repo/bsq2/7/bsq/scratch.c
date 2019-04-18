

	if (flag == 0 && c != '.')
		{
			nrow = nrow * 10 + (c - '0');
			printf("\n444a %d", nrow);
		} else {
			flag = 1;
		}

		if (c != '.')
		{
			if (flag == 1)
			{
				obst = c;
				printf("\n444b %c", obst);
				flag = 2;
			}
			if (flag == 2)		
			{
				full = c;
				printf("\n444c %c", obst);
			}
		}

		/////////////////////////////////////

		void ft_split(char *s)
{
	int i;
	char nrows[ISIZE]; // malloc???  need strlen before '.'
	int nrow;
	char b;
	char sq;

	i = 0;
	while (s[i] != '.')
	{
		nrows[i] = s[i];
		i++;
	}
	nrows[i] = '\0';
	nrow = ft_atoi(nrows);
	b = s[++i];
	sq = s[++i];
	//printf("\n444a %c %c %d", b, s, nrow);
}

///////////////////////////////////////////////////////

/*
		if (data->topleft == '\0')
			data->topleft = c;
		if (c == '\n' && i == 0 && j > 1)
			data->topright = prev;
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
*/

//////////////////////////////////////////////////////

		printf("\n555a  %d", nrow);
			printf("\n555b  %c  %c  %c", symbol[0], symbol[1], symbol[2]);
			//buf[rn] = '\0';
		//write(1, buf, rn);

///////////////////////////////////////////


/*
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
*/
/////////////////////////////////////////

/*

  int m[100][100] =  {{0, 1, 1, 0, 1},  
                    {1, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 0}, 
                    {1, 1, 1, 1, 0}, 
                    {1, 1, 1, 1, 1}, 
                    {0, 0, 0, 0, 0}}; 
  
*/

/////////////////////////////

    //printf("\n--MULTIPLE SOLUTIONS--  %d  %d  %d:\n", p->max, p->max_i, p->max_j);


///////////////////////////////

/*
// you can't run the below functions till you know the nrow and ncol!!!
t_bsq *bsq_malloc(t_bsq *p)
{
	// initialize m[][], s[][]
	p = bsq_initialize_matrix(p);
	//len = sizeof(int *) * (p->nrow + R) + sizeof(int) * (p->nrow * p->ncol + C);
	//p->m = (int **)malloc(len);
    // initialize maxi[][]
    // initialize maxj[][]
	return (p);
}
*/

////////////////////////////////////////

/*

	// test!!!
    printf("\nTEST:  %d  %d", p->nrow, p->ncol);
	
	i = 0;
	while (i < 10)
    {
        //p->m[i][0] = i * 2;
        //printf("\n%d  %d", i, p->m[i][0]);
        i++;
    }	


*/
////////////////////////////////////////
/*
	free(p->maxi);
	free(p->maxj);
	i = 0;
	while (i < p->ncol)
	{
		free(p->m[i]);
		free(p->s[i]);
		i++;
	}
	free(p->m);
	free(p->s);
*/

/*
	free(p->maxi);
	free(p->maxj);
	i = 0;
	while (i < C)
	{
		free(p->m[i]);
		free(p->s[i]);
		i++;
	}
	free(p->m);
	free(p->s);
*/

/////////////////////////////////

//NOT USED!!!
/*
t_bsq *bsq_construct_stdin(char *fn, t_bsq *p)
{
    int i;
    int j;
    int c;
	int fd;

	//fd = bsq_next_readline(fd);
    fd = open(fn, O_RDONLY);
	if (!ft_open_error(fd))
		return (0);
	
	i = 0;
	j = 0;
	while (read(fd, &c, 1) > 0)
	{
		write(1, &c, 1);
		if (c == '\n')
		{
			i++;
			j = 0;
			printf("\nHERE444444!!!");

		}
		else
		{
			p->m[i][j] = bsq_if_dot(c, p);
			j++;	
		}
	}

	printf("\nHEREc  %d  %d  %c  %c  %c", p->nrow, p->ncol, p->symbol[0], p->symbol[1], p->symbol[2]);

	printf("\nHERE!!!");
	bsq_print(p);
	printf("\nHERE222!!!");

	if (!ft_close_error(close(fd)))
		return (0);
    return (p);
}
*/

//////////////////////////

/*
    PRINTS THE SUB MATRIX - NOT NEEDED

    max_of_s++;
    printf("\nMaximum size sub-matrix is:  \n");
    i = max_i;
    while (i > max_i - max_of_s)
    {
        j = max_j;
        while(j> max_j - max_of_s)
        {
            printf("%d ", p->m[i][j]);
            j--;
        }
        printf("\n");
        i--;
    }
*/
////////////////////////////////



