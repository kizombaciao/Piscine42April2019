NAME = colle-00

SRC0 = ./main00.c rush00.c ft_putchar.c ft_atoi.c
SRC1 = ./main01.c rush01.c ft_putchar.c ft_atoi.c
SRC2 = ./main02.c rush02.c ft_putchar.c ft_atoi.c
SRC3 = ./main03.c rush03.c ft_putchar.c ft_atoi.c
SRC4 = ./main04.c rush04.c ft_putchar.c ft_atoi.c

#HEAD = ./colle_2.h

#OBJ = ./*.o

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	#gcc -c $(SRC)
	#gcc $(FLAG) -o $(NAME) $(OBJ) -I $(HEAD)
	gcc $(FLAG) -o $(NAME) $(SRC0)
	gcc $(FLAG) -o colle-01 $(SRC1)
	gcc $(FLAG) -o colle-02 $(SRC2)
	gcc $(FLAG) -o colle-03 $(SRC3)
	gcc $(FLAG) -o colle-04 $(SRC4)


clean:
	rm -f *.o

fclean:
	rm -f $(NAME) *.o
	
re: fclean all