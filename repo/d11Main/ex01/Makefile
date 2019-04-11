PROJ = lll
SRC = *.c ../ex00/ft_create_elem.c
HEAD = *.h
FLAG = -Wall -Wextra -Werror
OUT = aaa

all: $(PROJ)

$(PROJ):
	gcc -g $(FLAG) -o $(OUT) $(SRC) -I $(HEAD)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f *~
	/bin/rm -rf aaa.dSYM

fclean:	clean
	/bin/rm -f $(OUT)

re:		fclean all