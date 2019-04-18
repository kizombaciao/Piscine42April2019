NAME = eval_expr

SRC = ./*.c

HEAD = ./eval_expr.h

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAG) -o $(NAME) $(SRC) -I $(HEAD)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME) *.o
	
re: fclean all