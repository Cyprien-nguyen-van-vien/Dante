/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_getnbr_base_inf function
*/

#include <stdlib.h>
#include "my.h"

static int check_digit(int digit, int *less)
{
    int out = 0;

    if (digit < -2) {
        out = 1;
    } else if (digit == -1) {
        *less += 1;
    }
    return (out);
}

static int get_number(char c, char const *base)
{
    int size = my_strlen(base);
    int digit = -3;

    if (c == 45 || c == 43) {
        digit = (c == 45 ? -1 : -2);
    }
    for (int i = 0; i < size; i++) {
        if (base[i] == c) {
            digit = i;
        }
    }
    return (digit);
}

static char *add_digit(char *str, int size, int digit)
{
    char *parsed = my_parsenbr(size);
    char *number = my_parsenbr(digit);
    char *mult = my_infinmult(str, parsed);
    char *new = my_infinadd(mult, number);

    my_free(4, parsed, number, mult, str);
    return (new);
}

char *my_inf_getnbr_base(char const *str, char const *base)
{
    int size = my_strlen(base);
    int less = 0;
    int out = 0;
    int count = 0;
    char *new = my_strdup("0");
    char *tmp = NULL;

    for (int i = 0; str[i] != '\0' && out == 0; i++) {
        out = check_digit(get_number(str[i], base), &less);
        if (get_number(str[i], base) > -1) {
            new = add_digit(new, size, get_number(str[i], base));
            count++;
        }
    }
    if (less % 2 == 1) {
        tmp = my_inf_opposite(new);
        free(new);
        new = tmp;
    }
    return (new);
}
