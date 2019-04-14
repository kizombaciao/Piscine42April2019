NAME = ft_tail

SRC = ./ft_tail.c

HEAD = ./*.h

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(OBJ) -I $(HEAD)

clean: 
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME) *.o

re: fclean all