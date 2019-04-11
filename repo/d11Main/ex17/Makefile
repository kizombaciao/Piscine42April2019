PROJ = lll
SRC = ./*.c ../ex00/ft_create_elem.c ../ex01/ft_list_push_back.c \
			../ex02/ft_list_push_front.c
HEAD = *.h
FLAG = -Wall -Wextra -Werror
OUT = aaa

all: $(PROJ)

$(PROJ):
	gcc -g -o $(OUT) $(SRC) -I $(HEAD)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f *~
	/bin/rm -rf aaa.dSYM

fclean:	clean
	/bin/rm -f $(OUT)

re:		fclean all