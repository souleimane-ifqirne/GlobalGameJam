##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## A makefile.
##

SRC	=	lib/my/my_getnbr.c				\
		lib/my/my_putchar.c				\
		lib/my/my_putstr.c				\
		lib/my/my_revstr.c				\
		lib/my/my_strcat.c				\
		lib/my/my_strcpy.c				\
		lib/my/my_strlen.c				\
		lib/my/my_strncat.c				\
		lib/my/my_strncpy.c				\
		lib/my/my_put_nbr.c				\
		lib/my/my_put_unsigned_nbr.c	\
		lib/my/my_printf_1.c			\
		lib/my/my_printf_2.c			\
		lib/my/my_printf_3.c			\
		lib/my/my_printf.c	\
		my_rev_putnbr.c

OBJ	=	$(SRC:.c=.o)

NAME = a.out

FILES = main.c

all:	$(OBJ)
	ar rcs lib/my/libmy.a $(OBJ)
	rm -f $(OBJ)
	gcc $(FILES) -L./lib/my/ -lmy -o $(NAME) -g -g3 -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window -o $(NAME)
	rm -f *~

re:		all
	rm -f lib/my/libmy.a