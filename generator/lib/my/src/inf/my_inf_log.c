/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_log function
*/

#include <stdlib.h>
#include "my.h"

static char *make_addition(char *result)
{
    char *str = my_infinadd(result, "1");

    free(result);
    return (str);
}

static char *make_division(char *nb, char *x)
{
    char *str = my_infindiv(nb, x);

    free(nb);
    return (str);
}

char *my_inf_log(char *nbr, char *x)
{
    int zero = 0;
    char *nb = my_strdup(nbr);
    char *result = my_strdup("0");

    zero += (my_strcmp(nb, "0") == 0 || nbr[0] == '-' ? 1 : 0);
    zero += (my_strcmp(x, "0") == 0 || x[0] == '-' ? 1 : 0);
    for (int i = 0; my_inf_cmp(nb, x) != -1 && zero == 0; i++) {
        result = make_addition(result);
        nb = make_division(nb, x);
    }
    free(nb);
    if (zero > 0) {
        free(result);
        result = my_strdup("0");
    }
    return (result);
}
