##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make binary
##

CFLAGS	=	-I./include/ -Wall -Wextra

SRCDIR	=	src/

SRC		=	${SRCDIR}my_ls.c

OBJ		=	$(SRC:.c=.o)

NAME	=	my_ls

LDFLAGS =	-L./lib/ -lmy

MKLIB	=	make -C lib/

RMO	=	rm *.o

RM 	=	rm -f

RMLIB	=	rm -f lib/libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MKLIB)
	gcc -lncurses -o $(NAME) $(OBJ) $(LDFLAGS) -g

clean:
	$(RM) $(OBJ)
	$(RM) lib/*.o

fclean: clean
	$(RM) $(NAME)
	$(RMLIB)

re:	fclean all
