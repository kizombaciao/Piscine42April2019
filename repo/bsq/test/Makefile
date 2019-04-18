NAME = geeks2

SRC = ./geeks2.c

HEAD = ./.h

#OBJ = ./*.o

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