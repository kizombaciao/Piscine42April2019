PROJ = do-op
SRC = ./*.c
HEAD = ./*.h
OBJ = *.o
FLAG = -Wall -Wextra -Werror
OUT = do-op

all: $(PROJ)

$(PROJ):
	gcc $(FLAG) -c $(SRC) -I $(HEAD)
	gcc -o $(OUT) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f *~

fclean:	clean
	/bin/rm -f $(OUT)

re:	fclean all

# good version except missing library commands
# ar rc $(NAME) $(OBJ)
#	ranlib $(NAME)