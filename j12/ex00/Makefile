NAME = ft_display_file

SRC = ./main.c ft_display_file.c

HEAD = ./ft.h

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(OBJ) -I $(HEAD)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME) *.o
	
re: fclean all