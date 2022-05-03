/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_infinsub function
*/

#include "my.h"

char *my_infinsub(char const *nbr1, char const *nbr2)
{
    char *dup = my_strdup(nbr2);
    char *opp = my_inf_opposite(dup);
    char *result = my_infinadd(nbr1, opp);

    my_free(2, dup, opp);
    return (result);
}

int check_zero(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] != '0') {
            return (0);
        }
    }
    str[1] = '\0';
    return (1);
}

int should_swap(char const *nbr1, char const *nbr2)
{
    int out = 0;
    char *nb1 = my_strdup(nbr1[0] == '-' ? &nbr1[1] : nbr1);
    char *nb2 = my_strdup(nbr2[0] == '-' ? &nbr2[1] : nbr2);
    int result = my_strcmp(nb1, nb2);
    int l1 = (nbr1[0] == '-' ? 1 : 0);
    int l2 = (nbr2[0] == '-' ? 1 : 0);
    int s1 = my_strlen(nb1);
    int s2 = my_strlen(nb2);

    if ((result < 0 && s2 >= s1) || (s1 < s2 && l1 != l2)) {
        out = 1;
    } else {
        out = -1;
    }
    my_free(2, nb1, nb2);
    return (out);
}
