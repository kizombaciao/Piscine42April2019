NAME = colle-2

SRC = ./main.c colle_2.c rush_print.c ft_putchar.c ft_putstr.c ft_putnbr.c

HEAD = ./colle_2.h

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	#gcc -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(SRC) -I $(HEAD)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME) *.o
	
re: fclean all