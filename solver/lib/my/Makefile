##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Makefile
##

SRC		=	src/array/my_arraylen.c \
			src/array/my_show_word_array.c \
			src/array/my_sort_int_array.c \
			src/array/my_sort_string_array.c \
			src/inf/my_inf_abs.c \
			src/inf/my_inf_cmp.c \
			src/inf/my_inf_getnbr.c \
			src/inf/my_inf_getnbr_base.c \
			src/inf/my_inf_log.c \
			src/inf/my_inf_opposite.c \
			src/inf/my_inf_parsenbr_base.c \
			src/inf/my_inf_power.c \
			src/inf/my_infinadd.c \
			src/inf/my_infindiv.c \
			src/inf/my_infinmod.c \
			src/inf/my_infinmult.c \
			src/inf/my_infinsub.c \
			src/math/my_factorial.c \
			src/math/my_find_prime_sup.c \
			src/math/my_is_prime.c \
			src/math/my_log.c \
			src/math/my_power.c \
			src/math/my_square_root.c \
			src/number/my_getnbr.c \
			src/number/my_getnbr_base.c \
			src/number/my_is_number.c \
			src/number/my_nbrlen.c \
			src/number/my_number.c \
			src/number/my_parsenbr_base.c \
			src/number/my_parsenbr_long.c \
			src/number/my_parsenbr.c \
			src/printf/my_printf.c \
			src/printf/my_printf_bases.c \
			src/printf/my_printf_core.c \
			src/printf/my_printf_formats.c \
			src/printf/my_printf_formatter.c \
			src/printf/my_printf_info.c \
			src/printf/my_printf_numbers.c \
			src/printf/my_printf_parser.c \
			src/printf/my_printf_strings.c \
			src/printf/my_printf_var.c \
			src/string/my_revstr.c \
			src/string/my_str_contains.c \
			src/string/my_str_isalpha.c \
			src/string/my_str_islower.c \
			src/string/my_str_isnum.c \
			src/string/my_str_isprintable.c \
			src/string/my_str_isupper.c \
			src/string/my_str_starts.c \
			src/string/my_str_to_word_array.c \
			src/string/my_strcapitalize.c \
			src/string/my_strcat.c \
			src/string/my_strcmp.c \
			src/string/my_strcpy.c \
			src/string/my_strdup.c \
			src/string/my_strfill.c \
			src/string/my_strlen.c \
			src/string/my_strlowcase.c \
			src/string/my_strncat.c \
			src/string/my_strncmp.c \
			src/string/my_strncpy.c \
			src/string/my_strrep.c \
			src/string/my_strsplit.c \
			src/string/my_strstr.c \
			src/string/my_strtoi.c \
			src/string/my_strupcase.c \
			src/string/my_strxcat.c \
			src/string/my_substr.c \
			src/my_free.c \
			src/my_free_arrays.c \
			src/my_putnbr.c \
			src/my_putchar.c \
			src/my_putstr.c

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

INC		=	include/

TEST	=	unit_tests
TESTS	=	tests/test_array.c \
			tests/test_inf.c \
			tests/test_lib.c \
			tests/test_math.c \
			tests/test_number.c \
			tests/test_printf.c

AR		=	ar rc
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Wpedantic
CPPFLAGS =	-I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno

dev:
	$(CC) $(SRC) -g3 $(CPPFLAGS) $(CFLAGS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TEST)

install: fclean
	$(RM) -r .git/
	$(RM) -r .idea/
	$(RM) -r tests
	$(RM) .gitignore

re:     fclean all

tests_run:
	$(RM) *.gcda
	$(RM) *.gcno
	$(CC) -o $(TEST) $(SRC) $(TESTS) $(CPPFLAGS) --coverage -lcriterion
	./$(TEST)

.PHONY: all clean dev fclean install re tests_run
