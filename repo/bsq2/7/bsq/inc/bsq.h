#ifndef BSQ_H
#define BSQ_H

#define BUF_SIZE 100
#define OBSTACLE 0
#define EMPTY 1
#define R 10000
#define C 10000

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_bsq
{
    int                 nrow;
    int                 ncol;
    char                symbol[3];
    int                 **m;
    int                 **s;
    int                 max;
    int                 max_i;
    int                 max_j;
    int                 *maxi;
    int                 *maxj;
    int                 maxindex;
}   t_bsq;

//read
t_bsq   *bsq_read(char *fn, t_bsq *p);
int     bsq_read_title(int fd, t_bsq *p);
t_bsq   *bsq_read_body(int fd, t_bsq *p);
int     bsq_next_readline(int fd);
t_bsq   *bsq_read_stdin(t_bsq *p);
t_bsq   *bsq_read_body_stdin(int fd, t_bsq *p);


//construct
t_bsq   *bsq_create_struct();
t_bsq   *bsq_construct(char *fn, t_bsq *p);
t_bsq   *bsq_construct_stdin(char* fn, t_bsq *p);
t_bsq   *bsq_initialize_array(t_bsq *p);
void    bsq_free(t_bsq *p);
void bsq_free_stdin(t_bsq *p);


//solve
t_bsq   *bsq_solve(t_bsq *p);
t_bsq   *bsq_solve_setup(t_bsq *p);
t_bsq   *bsq_solve_max(t_bsq *p);
t_bsq   *bsq_solve_multiple_candidates(t_bsq *p);
t_bsq   *bsq_solve_max_ij(t_bsq *p);
t_bsq   *bsq_solve_multiple_candidates(t_bsq *p);


//print
void    bsq_print(t_bsq *p);
void    bsq_print_max(t_bsq *p);
void    bsq_print_full_symbol(t_bsq *p);
void    bsq_print_empty_or_obstacle(t_bsq *p, int);
void    bsq_print_result(int max_i, int max_j, t_bsq *p);

//error
int     ft_open_error(int fd);
int     ft_close_error(int fd);

//utility
int     bsq_min(int a, int b, int c);
int     bsq_if_dot(char c, t_bsq *p);

int		ft_argc_error(int argc);
int     ft_is_num(char c);
void    ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif

// multiple solutions! sorting 2 arrays simultaneously
// valid map error check!
// error checks!
// >> invalid files should not crash!!!

// need to remove printf()
// need to remove stdio.h


// questions:
// how to reset index back to the beginning of the file to read???
// https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/

// is passing a 2-d array the same as passing a pointer, with preservation of memory? yes!
// CAN I RETURN 0 EVEN THOUGH THE FUNC RETURNS A STRUCT POINTER???


// DONE
// multiple argv!!!
// malloc!!! // NEED NROW + 1???
// IMPORTANT! NEED TO REINTIALIZE AFTER EACH INPUT FILE!!!
// intialize matrices!
// stdin construction!!! >> need to write file!!!
// may remove max_i and max_j
// free memory throughout!!!
// remove ft_atoi!
// make main() read like a book!
