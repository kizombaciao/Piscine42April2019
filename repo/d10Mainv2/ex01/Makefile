NAME = abc
SRC = *.c
HEAD = -I *.h
OBJ = *.o
FLAG = -Wall -Wextra -Werror
EXE = -o aaa

all: $(NAME)

$(NAME):
	gcc $(EXE) $(SRC) $(HEAD)
#	ar rc $(NAME) $(OBJ)
#	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
