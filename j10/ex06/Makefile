# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 19:00:31 by cchao             #+#    #+#              #
#    Updated: 2019/04/09 19:00:37 by cchao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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