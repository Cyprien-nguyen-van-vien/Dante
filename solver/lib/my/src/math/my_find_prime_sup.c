/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_find_prime_sup function
*/

#include <limits.h>
#include "my.h"

int my_find_prime_sup(int nbr)
{
    for (int i = nbr; i < INT_MAX; i++) {
        if (my_is_prime(i) == 1) {
            return (i);
        }
    }
    return (0);
}
