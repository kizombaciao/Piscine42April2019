PROJ = sort
SRC = ./*.c
HEAD = ./*.h
OBJ = *.o
FLAG = -Wall -Wextra -Werror
OUT = sort

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
