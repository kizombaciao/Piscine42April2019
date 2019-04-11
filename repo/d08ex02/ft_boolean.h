#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(x)  x%2==0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef	enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

#endif
