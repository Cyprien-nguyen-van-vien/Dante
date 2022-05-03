/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_parsenbr_base function
*/

#include <stdlib.h>
#include "my.h"

static char *make_operation(char *nb, char *array, char const *base, int old)
{
    char *b_size = my_parsenbr(my_strlen(base));
    char *digit = my_infinmod(nb, b_size);
    char value = base[my_getnbr(digit)];

    free(digit);
    array[old] = value;
    digit = my_infindiv(nb, b_size);
    my_free(2, nb, b_size);
    return (digit);
}

static void init_array(char *nb, char *array, char const *base, int size)
{
    int old = 0;
    int less = (nb[0] == '-' ? 1 : 0);
    char *b_size = my_parsenbr(size);

    nb = my_strrep(nb, "-", "");
    while (my_inf_cmp(nb, "0") > 0) {
        nb = make_operation(nb, array, base, old);
        old++;
    }
    if (less == 1) {
        array[old] = '-';
        old++;
    }
    array[old] = '\0';
    my_free(2, b_size, nb);
}

static char *to_string(char *nb, char const *base, int size)
{
    char *abs = (nb[0] == '-' ? &nb[1] : nb);
    char *parse = my_parsenbr(size);
    char *log = my_inf_log(abs, parse);
    int old = my_getnbr(log) + 2;
    int arr_size = old + 1;
    char *array = malloc(sizeof(char) * (old + 1));

    my_strfill(array, arr_size - 1, '0');
    init_array(nb, array, base, size);
    my_revstr(array);
    my_free(2, parse, log);
    return (array);
}

char *my_inf_parsenbr_base(char *nbr, char const *base)
{
    int size = my_strlen(base);
    char *result = NULL;
    char *copy = my_strdup(nbr);

    if (my_strcmp(nbr, "0") == 0) {
        result = malloc(sizeof(char) * 2);
        result[0] = base[0];
        result[1] = '\0';
        free(copy);
        return (result);
    }
    result = to_string(copy, base, size);
    return (result);
}
