/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_opposite function
*/

#include "my.h"

char *my_inf_opposite(char const *nbr)
{
    if (my_strcmp(nbr, "0") == 0) {
        return (my_strdup("0"));
    } else if (nbr[0] == '-') {
        return (my_substr(nbr, 1, my_strlen(nbr)));
    } else {
        return (my_strcat("-", nbr));
    }
}
