/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_power function
*/

#include <limits.h>

static long power_rec(long nbr, long p)
{
    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        return (nbr * power_rec(nbr, p - 1));
    }
}

int my_power(int nbr, int p)
{
    long total = power_rec(nbr, p);

    if (total > INT_MAX || total < INT_MIN) {
        total = 0;
    }
    return ((int) total);
}
