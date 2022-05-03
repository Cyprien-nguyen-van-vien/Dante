##
## EPITECH PROJECT, 2021
## Dante
## File description:
## Solver Makefile
##

SRC 		=		src/solver.c \
					src/lists.c \
					src/printer.c \
					src/read_file.c \
					src/resolution.c \
					src/moves.c

MAIN 		=		src/main.c

OBJ 		=		$(SRC:.c=.o) \
					$(MAIN:.c=.o)

NAME		= 		solver
INC			= 		include/
LIBINC		=		lib/my/include

CC			=	gcc
CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I $(INC) -I $(LIBINC)
LDLIBS		=	lib/my/libmy.a

all: 	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDLIBS)

clean:
	make -C lib/my/ clean
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno

fclean:	clean
	make -C lib/my/ fclean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
