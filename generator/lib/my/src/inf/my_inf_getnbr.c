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

static int get_number(char c)
{
    int digit = -3;

    if (c == 45 || c == 43) {
        digit = (c == 45 ? -1 : -2);
    }
    for (int i = 0; i < 10; i++) {
        if (ITOC(i) == c) {
            digit = i;
        }
    }
    return (digit);
}

static char *add_digit(char *str, int digit)
{
    char *tmp = NULL;
    char *num = my_parsenbr(digit);

    tmp = my_infinmult(str, "10");
    free(str);
    str = my_infinadd(tmp, num);
    my_free(2, tmp, num);
    return (str);
}

char *my_inf_getnbr(char const *str)
{
    int less = 0;
    int out = 0;
    int count = 0;
    char *new = my_strdup("0");
    char *tmp = NULL;

    for (int i = 0; str[i] != '\0' && out == 0; i++) {
        out = check_digit(get_number(str[i]), &less);
        if (get_number(str[i]) > -1) {
            new = add_digit(new, get_number(str[i]));
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
