##
## EPITECH PROJECT, 2021
## dante
## File description:
## Generator Makefile
##

SRC 		=		src/generator.c \
					src/error.c \
					src/map.c \
					src/perfect.c \
					src/imperfect.c \
					src/lists.c \
					src/moves.c \
					src/resolution.c

MAIN 		=		src/main.c

OBJ 		=		$(SRC:.c=.o) \
					$(MAIN:.c=.o)

NAME		= 		generator
INC			= 		include/
LIBINC		=		lib/my/include/

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
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
