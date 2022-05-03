/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_abs function
*/

#include "my.h"

char *my_inf_abs(char const *nbr)
{
    if (nbr[0] == '-') {
        return (my_inf_opposite(nbr));
    } else {
        return (my_strdup(nbr));
    }
}
