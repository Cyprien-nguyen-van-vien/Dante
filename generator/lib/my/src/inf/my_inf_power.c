/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_power function
*/

#include <stddef.h>
#include "my.h"

char *my_inf_power(char *nbr, char *p)
{
    char *result = NULL;
    char *less = NULL;
    char *pow = NULL;

    if (my_strcmp(p, "0") == 0) {
        return (my_strdup("1"));
    } else if (p[0] == '-') {
        return (my_strdup("0"));
    } else {
        less = my_infinadd(p, "-1");
        pow = my_inf_power(nbr, less);
        result = my_infinmult(nbr, pow);
        my_free(2, less, pow);
        return (result);
    }
}
