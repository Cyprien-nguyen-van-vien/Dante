/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strcmp function
*/

#include "my.h"

static int check_size(char const *str, int size)
{
    char result;

    result = str[size];
    return (result);
}

int my_strcmp(char const *s1, char const *s2)
{
    int size = my_strlen(s1);
    int size2 = my_strlen(s2);
    int result = 0;

    for (int i = 0; s1[i] != '\0' && s2[i] != '\0' && result == 0; i++) {
        if (s1[i] != s2[i]) {
            result = s1[i] - s2[i];
        }
    }
    if (result == 0 && size > size2) {
        result = check_size(s1, size2);
    } else if (result == 0 && size < size2) {
        result = check_size(s2, size) * -1;
    }
    return (result);
}
