##
## EPITECH PROJECT, 2021
## dante
## File description:
## Root makefile
##

all:
	make -C generator/
	make -C solver/

clean:
	make clean -C generator/
	make clean -C solver/

fclean:	clean
	make fclean -C generator/
	make fclean -C solver/

re:	fclean all

.PHONY: all clean fclean re
