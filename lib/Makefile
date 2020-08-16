##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Compile
##


RM	=	rm -f
SRC	=	my_convert_num.c	\
		my_put_nbr.c	\
		my_putstr.c		\
		my_strlen.c		\
		my_printf.c		\
		my_putchar.c	\
		my_revstr.c		\
		my_strncpy.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all
