/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_is_prime function
*/

#include "my.h"

static int check_prime(int nbr, int divider)
{
    int out = 0;

    if (nbr % divider == 0) {
        out = 1;
    }
    return (out);
}

static int get_special_case(int nbr)
{
    int result = 0;

    if (nbr == 2 || nbr == 3) {
        result = 1;
    }
    return (result);
}

int my_is_prime(int nbr)
{
    int root = 0;

    if (nbr < 4) {
        return get_special_case(nbr);
    }
    root = my_square_root(nbr);
    for (int i = 2; i <= root; i++) {
        if (check_prime(nbr, i) == 1) {
            return (0);
        }
    }
    return (1);
}
