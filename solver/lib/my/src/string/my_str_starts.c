/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_starts function
*/

#include "my.h"

int my_str_starts(char const *str, char const *to_find)
{
    int size = my_strlen(str);
    int size_2 = my_strlen(to_find);
    int same = 0;

    for (int i = 0; i < size && i < size_2; i++) {
        if (str[i] == to_find[i]) {
            same++;
        }
    }
    if (same == size_2) {
        return (0);
    }
    return (1);
}
