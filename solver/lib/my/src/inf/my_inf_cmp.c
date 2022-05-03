/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_inf_cmp function
*/

#include "my.h"

static int is_minor(int s1, int s2, int l1, int l2)
{
    if ((l1 == 1 && l2 == 1 && s1 > s2) || (l1 == 1 && l2 == 0)) {
        return (1);
    } else if (l1 == 0 && l2 == 0 && s1 < s2) {
        return (1);
    } else {
        return (0);
    }
}

static int is_cmp(char *nb1, char *nb2, int l1, int l2)
{
    int cmp = my_strcmp(nb1, nb2);
    int s1 = my_strlen(nb1);
    int s2 = my_strlen(nb2);

    if (l1 == 1 && s1 == s2 && cmp >= 1) {
        return (1);
    } else if (l1 == 0 && l2 == 0 && s1 == s2 && cmp <= -1) {
        return (1);
    } else {
        return (0);
    }
}

int my_inf_cmp(char const *nbr1, char const *nbr2)
{
    int out = 0;
    char *nb1 = my_strdup((nbr1[0] == '-' ? &nbr1[1] : nbr1));
    char *nb2 = my_strdup((nbr2[0] == '-' ? &nbr2[1] : nbr2));
    int l1 = (nbr1[0] == '-' ? 1 : 0);
    int l2 = (nbr2[0] == '-' ? 1 : 0);
    int s1 = my_strlen(nb1);
    int s2 = my_strlen(nb2);

    if (l1 == l2 && my_strcmp(nb1, nb2) == 0) {
        out = 0;
    } else if (is_minor(s1, s2, l1, l2) == 1 || is_cmp(nb1, nb2, l1, l2) == 1) {
        out = -1;
    } else {
        out = 1;
    }
    my_free(2, nb1, nb2);
    return (out);
}
