##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make binary
##

CFLAGS	=	-I./include/ -Wall -Wextra

SRCDIR	=	src/

SRC		=	${SRCDIR}my_ls.c \
			$(SRCDIR)user_right.c

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
	make -C bonus/
	gcc -lncurses -o $(NAME) $(OBJ) $(LDFLAGS) -g

clean:
	$(RM) $(OBJ)
	$(RM) lib/*.o
	make fclean -C bonus/

fclean: clean
	$(RM) $(NAME)
	$(RMLIB)
	make fclean -C bonus/

re:	fclean all
	make re -C bonus/

bonus: make -C bonus/
